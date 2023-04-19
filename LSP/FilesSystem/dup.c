#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
        int fd1,fd2;
        char buf1[30],buf2[10];
        fd1 = open("source.txt",O_RDONLY);
      //  fd2 = open("source.txt",O_RDONLY);
       fd2 = dup(fd1);
       	getchar();
        read(fd1,&buf1,30);
        printf("%s\n",buf1);
        read(fd2,&buf2,10);
        printf("%s\n",buf2);
        getchar();
        getchar();
        read(fd1,&buf1,30);
        printf("%s\n",buf1);
        read(fd2,&buf2,10);
        printf("%s\n",buf2);
        getchar();
}

