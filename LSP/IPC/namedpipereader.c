# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
#include <unistd.h>
void main()
{
	int fdr;
	char buf[100];
	printf("Process with PID = %d\n",getpid());
	while(1)
	{	
		fdr = open("fifo",O_RDONLY);
		read(fdr,&buf,sizeof(buf));
		printf("%s\n",buf);
	}

}

