/*
1.Write a program which accept one number from user and count number ofON (1) bits in it without using % and / operator.
Input : 11(1011)
Output : 3 */

#include<stdio.h>
typedef unsigned int UINT;
UINT CountON(UINT uNo)
{
	UINT uMask=0X00000001,uResult=0;
	int iCnt=0;
	
	if(uNo<0)
	{
		uNo= -uNo;
	}
	
	while(uNo!=0)
	{
		
		uResult=uNo&uMask;
		if(uResult==uMask)
		{
			iCnt++;	
		}
		uNo=uNo>>1;
	}
	return iCnt;
}

int main()
{
	UINT uValue1=0;
	int iRet=0;
	
	printf("Enter no:");
	scanf("%u",&uValue1);
	
	iRet=CountON(uValue1);
	printf("ON bits are:%d",iRet);
	
	return 0;
}