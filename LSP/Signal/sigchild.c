#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
void sighandler(int signal)
{
int status,pid;
printf("In handler signal received - %d = %s\n",signal);//sys_siglist[signal]);
pid = wait(&status);
printf("Gathered the status of process %d\n",pid);
}


void main()
{
	signal(SIGCHLD,sighandler);
int pid = fork();
if(pid==0)
{
	printf("Child process, with PID = %d\n",getpid());
	sleep(10);
	exit(0);
}
if(pid!=0 && pid != -1)
{
	printf("Parent process\n");
	getchar();
}
}

