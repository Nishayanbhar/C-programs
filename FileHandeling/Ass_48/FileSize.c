/*
4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes 
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int FileSize(char* name)
{
	int fd=0,ret=0;
	
	fd=open(name,O_RDONLY);
	if(fd== -1)
	{
		printf("Unable to open\n");
		return -1;
	}
	
	ret=lseek(fd,0,SEEK_END);
	close(fd);
	return ret;
}
int main()
{
	char name[20]={'\0'};
	int ret=0;
	
	printf("Enter File Name:\n");
	scanf("%s",name);
	
	ret=FileSize(name);
	printf("File size is:%d bytes",ret);
	return 0;
}