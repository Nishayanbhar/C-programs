/*
1.Write a program which accept one number and position from user and check whether bit at that position is on or off. 
If bit is one return TURE ,otherwise return FALSE.
Input : 10 2
Output : TRUE 
*/
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT uNo, int iPos)
{
	UINT uMask=0X00000001,uResult=0;
	
	if((iPos<1)||(iPos>32))
	{
		return FALSE;
	}
	
	if(uNo<0)
	{
		uNo= -uNo;
	}
	
	uMask=uMask<<(iPos-1);
	uResult=uNo&uMask;
	
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
	
	UINT uValue1=0;
	int iValue2=0;
	BOOL bRet=FALSE;
	
	printf("Enter no:");
	scanf("%u",&uValue1);
	printf("Enter position:");
	scanf("%d",&iValue2);
	
	bRet=CheckBit(uValue1,iValue2);
	if(bRet==TRUE)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("bit is OFF");
	}
	
	return 0;
}