/*
2.Accept no from user and check whether its 5th and 18th bits are on or off
*/
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT uNo)
{
	int uMask= 0X00020010,uResult=0;
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