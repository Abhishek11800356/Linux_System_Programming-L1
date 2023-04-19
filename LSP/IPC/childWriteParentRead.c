# include <stdio.h>
# include <string.h>
#include<unistd.h>
# define Read 0
# define Write 1

char *message = "Child process is writing into the pipe and theparent process is reading\n";
void main(){
	
	int fd[2],pid;
	char readmessage[100];
	pipe(fd);
	pid=fork();
	if(pid==0)
	{
		close(fd[Read]); // closing the read end in the child
		write(fd[Write],message,strlen(message)+1);//Writing from the read end from the  child process.
		close(fd[Write]);
	}
	if(pid!=0&&pid!=-1)
	{
		close(fd[Write]); // Closing the write end on the parent 
		read(fd[Read],readmessage,100); // Reading from the read end of the parent.
		printf("The message from child is %s\n",readmessage); //printing the message.
	}

}

