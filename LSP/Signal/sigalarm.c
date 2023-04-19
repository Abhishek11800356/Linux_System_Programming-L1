#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

void sighandler(int signo){

        printf("In the handler for SIGALRM\n");
}

void main() 
{
	int ret;
	signal(SIGALRM,sighandler);
	printf("Setting up an alarm for 10 sec\n");
	ret = alarm(10);
	printf("ret is %d\n",ret);
         ret=alarm(20);
	printf("ret is %d\n",ret);
	printf("Alarm is set\n");
	pause();
}
     /*	printf("ret= %d\n", alarm(5));
	printf("ret = %d\n",alarm(10));
	printf("Call to alarm() done\n");
	pause();
	pause();*/


