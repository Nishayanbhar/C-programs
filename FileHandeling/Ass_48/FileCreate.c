/*
2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileCreate(char FName[])
{
	int fd=0;
	
	fd=creat(FName,0777);
	if(fd== -1)
	{
		printf("Unable to create\n");
	}
	else
	{
		printf("File successfully created\n");
	}
}
int main()
{
	char name[20]={'\0'};
	
	printf("Enter File Name:\n");
	scanf("%s",name);
	
	FileCreate(name);
	return 0;
}