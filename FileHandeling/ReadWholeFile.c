/*
	Appln to write into file
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void Display(char FName[])
{
	int fd=0,ret=0;
	char arr[100]={'\0'};
	
	fd=open(FName,O_RDONLY);
	if(fd== -1)
	{
		printf("Unable to open file\n");
		return;
	}
	printf("Data from file is:\n");
	while((ret=read(fd,arr,100))!=0)
	{
		write(1,arr,ret);		//1 means STDOUT, STDOUT means console.
	}
	close(fd);
}
int main()
{
	char name[20]={'\0'};
	
	printf("Enter file name");
	scanf("%s",name);
	
	Display(name);
	
	return 0;
}

