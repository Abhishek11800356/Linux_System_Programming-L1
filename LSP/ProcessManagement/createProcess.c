#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void main()
{        int pid;
       pid = fork();
	if(pid == 0)
	{
		printf("In the child process with PID =%d & PPID = %d\n",getpid(), getppid());
	getchar();
	}
	if(pid!=0 && pid!=-1)
	{
	printf("In the Parent process with PID =%d & PPID = %d\n",getpid(), getppid());
    getchar();
	}
	
}

