#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define Read 0
#define Write 1
void main()
{
	int pfd[2],pid1,pid2;
	char *argv1[] = {"cat","/usr/include/signal.h",NULL};
	char *argv2[] = {"less",NULL};
	pipe(pfd);
	pid1 = fork();
	if(pid1==0)
	{
          close(pfd[Read]);
	  dup2(pfd[1],STDOUT_FILENO);
	  execvp(argv1[0],argv1);
	}
	if(pid1!=0 && pid1!=-1)
	{
		pid2=fork();
		if(pid2==0)
		{
			close(pfd[1]);
			dup2(pfd[0],STDIN_FILENO);
			execvp(argv2[0],argv2);

		}
		if(pid2!=0 && pid2!=-1)
		{
			waitpid(pid1);
			waitpid(pid2);
		}
	}
}

