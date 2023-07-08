/*
5. Write a program which checks whether first and last bit is On or OFF. 
First bit means bit number 1 and last bit means bit number 32.
*/
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT uNo)
{
	int uMask= 0X80000001,uResult=0;
	if(uNo<0)
	{
		uNo= -uNo;
	}
	uResult= uNo&uMask;
	if(uResult==uMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
int main()
{
	UINT uValue=0;
	BOOL bRet=FALSE;
	printf("Enter no:");
	scanf("%u",&uValue);
	
	bRet=CheckBit(uValue); 
	if(bRet==TRUE)
	{
		printf("ON");
	}
	else
	{
		printf("One of them or all bits are off");
	}
	return 0;
}