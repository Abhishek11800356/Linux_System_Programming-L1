# include <stdio.h>
# include <sys/ipc.h>

void main()
{
	int  key1,key2,key3;
	key1 = ftok("source.txt",10);
	key2 = ftok(".",128);
	key3 = ftok("open.c",200);
	printf("key1=%d; key2= %d; key3=%d \n",key1,key2,key3);

}

