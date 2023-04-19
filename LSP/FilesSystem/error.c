#include <stdio.h>
#include <error.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

void main()
{
	int fd1,fd2;
	fd1 = open("hello.txt",O_RDONLY);
	if(fd1<0)
		printf("The open call failed and The error no. is %d and the error is caused by %s",errno,strerror(errno));
getchar();
}	
