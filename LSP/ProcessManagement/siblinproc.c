#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void main()
{        int pid,pid2;
       pid = fork();
	if(pid == 0)
	{
		printf("In the child process with PID =%d & PPID = %d\n",getpid(), getppid());
	getchar();
	}
	if(pid!=0 && pid!=-1)
	{  
	  pid2=fork();
	  if(pid2==0)
	  {
    printf("In the second child process with PID =%d & PPID = %d\n",getpid(), getppid());
           getchar();
	  }
	  if(pid2!=0 && pid2!=-1)
	  {
		  printf("In the parent process with PID =%d & PPID = %d\n",getpid(), getppid());
         getchar();  
	  }

	printf("In the Parent process with PID =%d & PPID = %d\n",getpid(), getppid());
	
       getchar();
	}
	
}

