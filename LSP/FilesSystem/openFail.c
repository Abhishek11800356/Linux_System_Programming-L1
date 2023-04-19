#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
        int fd  = open("source1.txt",O_RDONLY);
        printf("File succesfully opened with fd = %d\n",fd);
        getchar();
        return 0;
}

