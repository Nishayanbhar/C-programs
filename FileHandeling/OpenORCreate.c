/*
	Appln to open the exesting file or create if not exist
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	char name[20]={'\0'};
	int fd=0;
	
	printf("Enter file name");
	scanf("%s",name);
	
	fd=open(name,O_RDWR | O_CREAT , 0777);
	if(fd== -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("file sucessfully opend with fd %d\n",fd);
	}
	close(fd);
	return 0;
}

