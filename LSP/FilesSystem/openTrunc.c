#include<stdio.h>
#include<fcntl.h>

void main()
{
	int fd1 = open("source1.txt",O_TRUNC|O_WRONLY|O_CREAT,0600);
	printf("The file descriptor fd1 = %d \n",fd1);
	getchar();
}
