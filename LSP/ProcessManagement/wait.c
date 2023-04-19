#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	int pid = fork();
	int status;
          if(pid == 0)
	  {
		  printf("In the child process PID = %d \n",getpid());
		  sleep(30);
		  exit(0);
             }
	  if(pid!=0 && pid!=-1)
	  {
		  printf("In the parent process \n");
		  wait(&status); 
		 if(WIFEXITED(status))
			 printf("Normal Termination\n");
		 if(WIFSIGNALED(status))
			 printf("Terminated by Signal\n");
	  }
  return 0;
}

