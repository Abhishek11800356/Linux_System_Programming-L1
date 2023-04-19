# include <stdio.h>
# include <fcntl.h>
#include <unistd.h>

void main()
{
	int fd  = open("source.txt",O_RDONLY);
	getchar();
	printf("File succesfully opened with fd = %d\n",fd);
	getchar();
       close(fd);
	getchar();

}
