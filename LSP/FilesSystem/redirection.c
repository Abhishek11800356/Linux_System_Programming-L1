#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
        int fd1,fd2;
        char buf1[100];
        fd1 = open("source.txt",O_RDONLY);
       fd2 = open("destination.txt",O_WRONLY|O_CREAT|O_TRUNC,0600);

      printf("Duplicate File descriptor value fd1 %d and fd2 =%d\n ",fd1,fd2);
        read(fd1,&buf1,100);
        printf("%s\n",buf1);
	getchar();
	dup2(fd2,STDOUT_FILENO);
        read(fd1,&buf1,30);
        printf("%s\n",buf1);
        getchar();
	getchar();
        
}

