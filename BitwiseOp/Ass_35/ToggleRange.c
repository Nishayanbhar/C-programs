/*
5. Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879. 
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT ToggleBits(UINT uNo, int iStart, int iEnd)
{
	UINT uResult=0,uMask=0X00000000;
	
	if((iStart<1)||(iEnd>32))
	{
		printf("invalid input");
	}
	
	if(uNo<0)
	{
		uNo= -uNo;
	}
	
	uMask=((1<<iEnd)-1)^(1<<(iStart-1)-1);
	uResult=uNo^uMask;
	
	return uResult;
}

int main()
{
	UINT uValue1=0,uRet=0;
	int iValue2, iValue3=0;
	
	printf("Enter no:");
	scanf("%u",&uValue1);
	
	printf("Enter Start Index:");
	scanf("%d",&iValue2);
	
	printf("Enter Last Index:");
	scanf("%d",&iValue3);
	
	uRet=ToggleBits(uValue1,iValue2,iValue3);
	printf("after toggle bits, no is %u",uRet);
	
	return 0;
}