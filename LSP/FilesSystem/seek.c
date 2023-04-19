#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fd1;
	char buf[20];
	fd1 = open("source.txt",O_RDWR);
	getchar();
	lseek(fd1,100,SEEK_SET);/* pos 100 */
	read(fd1,&buf,10);
	getchar();
	getchar();
	lseek(fd1,-20,SEEK_CUR); /* pos 80 */
	getchar();
	getchar();
	lseek(fd1,200,SEEK_END);/* pos sizeoffile+200 */
	getchar();
	getchar();
	write(fd1,&buf,10);
}


