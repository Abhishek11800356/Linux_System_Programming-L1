#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fdr,fdw;
	fdr  = open("source.txt",O_RDONLY);
	fdw =  open("destination.txt",O_WRONLY|O_CREAT,O_TRUNC,0664);
	printf("The File Succesfully opened with FDr = %d FDw = %d\n",fdr,fdw);
	getchar();
       return 0;
}
