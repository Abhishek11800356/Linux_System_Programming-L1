#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	int pid = fork();
	int pid2,gathered_pid;
	int status;
          if(pid == 0)
	  {
		  printf("In the child process PID = %d \n",getpid());
		  sleep(10);
		  exit(0);
             }
	  if(pid!=0 && pid!=-1)
	   {
		  pid2 =fork();
		  if(pid2==0)
		  {printf(" Child process 2 Pid = %d\n",getpid());
			  sleep(15);
	           }
		  if(pid2!=0 && pid2!=-1)
		  {
			  printf("Parent Process");
			 // gathered_pid = waitpid(-1,&status,0);
			  gathered_pid = waitpid(pid2,&status,0);
			  printf("Gathered the process of %d\n",gathered_pid);
		  }

		/*  printf("In the parent process \n");
		  wait(&status); 
		 if(WIFEXITED(status))
			 printf("Normal Termination\n");
		 if(WIFSIGNALED(status))
			 printf("Terminated by Signal\n");
	 */
			 }
  return 0;
}

