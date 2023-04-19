#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

void main()
{
	struct stat info;
//	stat("source.txt",&info);
	//int fd = open("source.txt",O_RDONLY);
//	fstat(fd,&info);
	lstat("srclink",&info);
	printf("The inode no# of the file is %ld\n",info.st_ino);
	printf("The UID = %d ,  GID = %ld and size = %ld\n",info.st_uid,info.st_ino,info.st_size);
}

