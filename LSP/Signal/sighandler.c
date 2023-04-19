#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>

void sighandler(int signum)
{       
	printf("We are in the signal handler module and the received signal is %d\n",signum);
}

void main()
{
  signal(SIGINT,sighandler);
  signal(SIGTERM,sighandler);
  getchar();
}
