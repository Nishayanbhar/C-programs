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
	
	fd=open(name,O_RDWR | O_CREAT , 0777);
	if(fd== -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("file sucessfully opend with fd %d\n",fd);
	}
	
	printf("Enter data that you want to write\n");
	scanf(" %[^'\n']s",arr);
	
	length=strlen(arr);
	ret=write(fd,arr,length);
	if(fd== -1)
	{
		printf("Unable to write into file\n");
	}
	else
	{
		printf("successfully written into file with fd %d\n",fd);
	}
	close(fd);
	return 0;
}

