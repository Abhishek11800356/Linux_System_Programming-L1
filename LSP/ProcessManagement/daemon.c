#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
 
void main(){
	int pid = fork();
	FILE *fp = NULL;
	if(pid ==0)
	{
		printf("In Child Process");
	}
	if(pid!=-1 && pid!=0)
	{
		printf("in the parent process\n");
//		getchar();
		exit(0);
	}	
	setsid();
	close(STDIN_FILENO);
	close(STDOUT_FILENO);
	close(STDERR_FILENO);
	fp = fopen("log.txt","w+");
	while(1)
	{
		sleep(2);
		fprintf(fp,"logging info......\n");
		fflush(fp);
	}

}
