#include<stdio.h>
#include<signal.h>
#include<unistd.h>
//#include<stdlib.h>
#include<sys/wait.h>
void main()
{
	int pid  = fork();
	int status;
	if(pid==0)
	{
		printf("Child process\n");
		sleep(10);
		raise(SIGKILL);
	
	}
	if(pid!=0 && pid!=-1)
	{
		printf("Parent process\n");
		wait(&status);
	//	sleep(15);
	//	kill(pid,SIGKILL);
		getchar();
	}
}
