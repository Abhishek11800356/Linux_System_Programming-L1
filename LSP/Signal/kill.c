#include<stdio.h>
#include<signal.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
	int pid  = fork();
	if(pid==0)
	{
		printf("Child process\n");
		getchar();
	}
	if(pid!=0 && pid!=-1)
	{
		printf("Parent process\n");
		sleep(15);
		kill(pid,SIGKILL);
		getchar();
		getchar();
	}
}
