/*
5. Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. 
(Nibble is a group of four bits) 
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
	UINT iMask=0Xf000000f,iResult=0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	iResult=iNo^iMask;
	
	return iResult;
}

int main()
{
	UINT iValue1=0,iRet=0;
	
	printf("Enter no:");
	scanf("%u",&iValue1);
	
	iRet=OffBit(iValue1);
	printf("after off bit, no is %u",iRet);
	
	return 0;
}