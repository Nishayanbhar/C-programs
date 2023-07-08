/*
5. Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
 Hello World
Output : Write Hello World at the end of Demo.txt file 

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void Append(char* name)
{
	int fd=0,length=0,ret=0;
	char arr[20]={'\0'};
	
	fd=open(name,O_WRONLY|O_APPEND);
	if(fd== -1)
	{
		printf("Unable to open\n");
		return;
	}	
	
	printf("Enter Data to append:\n");
	scanf(" %[^'\n']s",arr);
	
	write(fd,arr,sizeof(arr));
	close(fd);
}
int main()
{
	char name[20]={'\0'};
	
	printf("Enter File Name:\n");
	scanf("%s",name);
	
	Append(name);
	return 0;
}