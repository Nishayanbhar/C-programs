/*
3. Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileRead(char FName[])
{
	int fd=0,ret=0;
	char arr[50]={'\0'};
	
	fd=open(FName,O_RDONLY);
	if(fd== -1)
	{
		printf("Unable to open\n");
		return;
	}
	
	else
	{
		printf("data from file is:");
		while((ret=read(fd,arr,30))!=0)
		{
			write(1,arr,ret);
		}
	}
}
int main()
{
	char name[20]={'\0'};
	
	printf("Enter File Name:\n");
	scanf("%s",name);
	
	FileRead(name);
	return 0;
}