/*
3. Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
Input : 257
Output : TRUE 

*/
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT uNo)
{
	UINT uMask1=0X00000800,uMask2=0X00000100,uResult1=0,uResult2=0;

	if(uNo<0)
	{
		uNo= -uNo;
	}
	
	uResult1=uNo&uMask1;
	uResult2=uNo&uMask2;
	
	
	if((uResult1==uMask1)||(uResult2==uMask2))
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
	
	UINT uValue1=0;
	BOOL bRet=FALSE;
	
	printf("Enter no:");
	scanf("%u",&uValue1);
	
	bRet=CheckBit(uValue1);
	if(bRet==TRUE)
	{
		printf("ON");
	}
	else
	{
		printf("OFF");
	}
	
	return 0;
}