/*
4. Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE 

*/
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT uNo, int iPos1, int iPos2)
{
	UINT uMask1=0X00000001,uMask2=0X00000001,uResult1=0,uResult2=0;

	if(uNo<0)
	{
		uNo= -uNo;
	}
	
	uMask1=uMask1<<(iPos1-1);
	uMask2=uMask2<<(iPos2-1);
	
	
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
	
	UINT uNum=0;
	int iPosition1=0,iPosition2=0;
	BOOL bRet=FALSE;
	
	printf("Enter no:");
	scanf("%u",&uNum);
	
	printf("Enter 1st Pos:");
	scanf("%d",&iPosition1);
	
	printf("Enter 2nd Pos:");
	scanf("%d",&iPosition2);
	
	bRet=CheckBit(uNum,iPosition1,iPosition2);
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