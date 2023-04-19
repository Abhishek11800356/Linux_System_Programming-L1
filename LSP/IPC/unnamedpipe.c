#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

void main()
{
      int fd[2];
      getchar();
      pipe(fd);
      getchar();
      getchar();
      int pid = fork();
      getchar();
      getchar();
}
