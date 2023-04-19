#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fdr,fdw;
	char buf[20];
	int bytesread,byteswritten;
	fdr = open("source.txt",O_RDONLY);
	fdw = open("destination.txt",O_WRONLY|O_CREAT,0664);
	while((bytesread = read(fdr,&buf,10))>0)
	{
		printf("%s\n",buf);
		byteswritten = write(fdw,&buf,bytesread); //Writing the files   read by read call;
	}                  
	}
