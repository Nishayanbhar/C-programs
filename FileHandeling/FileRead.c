/*
	Appln to write into file
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char name[20]={'\0'},arr[50]={'\0'};
	int fd=0,length=0,ret=0;
	
	
	printf("Enter file name");
	scanf("%s",name);
	
	fd=open(name,O_RDWR);
	if(fd== -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("file sucessfully opend with fd %d\n",fd);
	}
	
	ret=read(fd,arr,10);			//read 10 bytes
	if(fd== -1)
	{
		printf("Unable to read file\n");
	}
	else
	{
		printf("Data successfully read\n");
	}
	printf("Data from file is: %s\n",arr);
	close(fd);
	return 0;
}

