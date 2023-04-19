# include <stdio.h>
# include <string.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

# define Read 0
# define Write 1

char *message = "--Writing from child1 to child2--";
main(){
	
	int fd[2],pid,pid2;
	int status;
	char buf[100];
	pipe(fd);
	pid=fork();
	if(pid==0)
	{
		close(fd[Read]);
		write(fd[Write],message,strlen(message)+1);
	}
	if(pid!=0&&pid!=-1)
	{
		pid2 = fork();
               if(pid2==0)
	       {
		       close(fd[Write]);
		       read(fd[Read],&buf,100);
		       printf("Message from child1 to child2: %s\n",buf);
               }
	       if(pid2!=0 && pid2!=-1)
	       {
		       waitpid(pid,&status,0);
		       waitpid(pid2,&status,0);

		}
	}

}


