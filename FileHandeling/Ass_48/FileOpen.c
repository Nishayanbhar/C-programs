/*
1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileOpen(char FName[])
{
	int fd=0;
	
	fd=open(FName,O_RDONLY);
	if(fd== -1)
	{
		printf("Unable to open\n");
	}
	else
	{
		printf("File successfully open\n");
	}
}
int main()
{
	char name[20]={'\0'};
	
	printf("Enter File Name:\n");
	scanf("%s",name);
	
	FileOpen(name);
	return 0;
}