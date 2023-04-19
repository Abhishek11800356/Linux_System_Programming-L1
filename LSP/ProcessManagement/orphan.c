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
		 // printf("In the child process\n");
		  sleep(30);
		  getchar();
		  getchar();
             }
	  if(pid!=0 && pid!=-1)
	  {
		  printf("In the parent process \n");
		  sleep(10);

	  }
  return 0;
}

