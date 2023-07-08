/*
1. Write a program which accepts file name from user and count number of
capital characters from that file.
Input : Demo.txt
Output : Number of capital characters are 23 

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int FileRead(char FName[])
{
	int fd=0,ret=0,freq=0;
	char arr[50]={'\0'}, temp='\0';
	
	fd=open(FName,O_RDONLY);
	if(fd== -1)
	{
		printf("Unable to open\n");
	}
	
	else
	{
		printf("In else\n");
		while((ret=read(fd,arr,1))!=0)
		{
			temp=(char)ret;
			if((temp>='A')&&(temp<='Z'))
			{
				freq++;
			}
		}
	}
	return freq;
}
int main()
{
	char name[20]={'\0'};
	int iRet=0;
	
	printf("Enter File Name:\n");
	scanf("%s",name);
	
	iRet=FileRead(name);
	printf("Freq of capital char is:%d",iRet);
	return 0;
}