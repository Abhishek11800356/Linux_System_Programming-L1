#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

void main()
{
	int pid = fork();
	//int status;
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
		  getchar();
	  }

}

