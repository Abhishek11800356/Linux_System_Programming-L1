#include<stdio.h>
#include<fcntl.h>
//#include<unistd.h>
void main()
{
        int fd1,fd2;
        fd1 = open("source.txt",O_RDONLY);
        fd2 = open("source1.txt",O_WRONLY|O_CREAT|O_EXCL);
	if(fd2>0)
	{ printf("Source.txt existed so opened fd1 = %d and Source1.txt didnt existed so created it therefore FD2  =%d\n",fd1,fd2);
	}
	else
printf("Source.txt existed so opened fd1 = %d and Source.txt already existed so failed  FD2  =%d\n",fd1,fd2);
        getchar();
}

