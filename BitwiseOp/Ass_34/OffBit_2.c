/*
2. Write a program which accept one number and position from user and off that bit. Return modified number.
Input : 10 2
Output : 8 
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(UINT uNo, int iPos)
{
	UINT uMask=0Xfffffffe,uResult=0;
	
	if((iPos<1)||(iPos>32))
	{
		printf("invalid input");
	}
	
	if(uNo<0)
	{
		uNo= -uNo;
	}
	
	uMask=uMask<<(iPos-1);
	uResult=uNo&uMask;
	
	return uResult;
}

int main()
{
	UINT uValue1=0,uRet=0;
	int iValue2=0;
	
	printf("Enter no:");
	scanf("%u",&uValue1);
	printf("Enter position:");
	scanf("%d",&iValue2);
	
	uRet=OffBit(uValue1,iValue2);
	printf("after off bit, no is %u",uRet);
	
	return 0;
}