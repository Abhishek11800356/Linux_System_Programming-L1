# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
#include <unistd.h>
void main()
{
	int fdw;
	char writebuffer[100];
	mkfifo("fifo",0664);
	printf("Process with PID = %d\n",getpid());
	while(1)
	{	
		fdw = open("fifo",O_WRONLY);
		fgets(writebuffer,100,stdin);
		write(fdw,writebuffer,sizeof(writebuffer));
	}

}

