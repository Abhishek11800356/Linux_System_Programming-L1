#include<stdio.h>
#include<fcntl.h> // it is a header file of c library for file systems 

void main()
{
	int fd1;
	fd1 = open("demo.txt",O_WRONLY|O_CREAT,0664);
	getchar();
	printf("The file was succesfully opened and the FD value is %d\n",fd1);        getchar();
        
}





