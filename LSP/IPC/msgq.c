# include <fcntl.h>
# include <sys/ipc.h>
# include <sys/msg.h>
# include <string.h>
# include <stdio.h>


void main()
{
	int key,msqid;
	struct message{
		long mtype;
		char text[50];
	}msgread,msgwrite;
	
	/* Generate a key */
	key = ftok(".",10);
	getchar();
	msqid = msgget(key,IPC_CREAT);
	getchar();
	getchar();
	printf("Message queue with id %d  created\n",msqid);
	msgwrite.mtype = 100;
	strcpy(msgwrite.text,"Message with type value 100\n");
	msgsnd(msqid,(void*)&msgwrite,sizeof(msgwrite),IPC_NOWAIT);
	getchar();
	getchar();
	msgrcv(msqid, (void*)&msgread,sizeof(msgread),100,IPC_NOWAIT);
	getchar();
	getchar();
	printf("%s\n",msgread.text);
	msgctl(msqid,IPC_RMID,0);
}

