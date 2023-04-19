#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
	int pid;
	char *argv[] = {"/home/ubuntu/LSP/ProcessManagement/getch",NULL};
	pid = fork();
	if(pid == 0)
	{
		execvp(argv[0],argv);

	}}
