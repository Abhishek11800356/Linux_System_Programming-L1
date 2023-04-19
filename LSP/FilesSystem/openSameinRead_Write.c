#include<stdio.h>
#include<fcntl.h>
//#include<unistd.h>
void main()
{
	int fd1,fd2;
	fd1 = open("source.txt",O_RDONLY);
	fd2 = open("source.txt",O_WRONLY);
	printf("File descriptor fd1 = %d and Fd2 =%d\n",fd1,fd2);
	getchar();
}

