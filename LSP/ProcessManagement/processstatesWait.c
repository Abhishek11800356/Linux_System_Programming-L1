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
		  printf("In the child process\n");
		  //exit();
		  sleep(30);
		  exit(0);
             }
	  if(pid!=0 && pid!=-1)
	  {
		  printf("In the parent process \n");
		  wait(&status); // When child terminates it sends SIGCHILD and// that can be received by WAIT() call;
		  getchar();
	  }
  return 0;
}

