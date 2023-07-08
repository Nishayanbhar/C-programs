/*
5. Write a program which accept one number from user and on its first 4 bits. Return modified number.
Input : 73
Output : 79 
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(UINT uNo)
{
	UINT uMask=0X0000000f,uResult=0;
	if(uNo<0)
	{
		uNo= -uNo;
	}
	
	uResult= uNo|uMask;


	return uResult;
}
int main()
{
	UINT uValue=0,uRet=0;
	printf("Enter no:");
	scanf("%u",&uValue);
	
	uRet= OffBit(uValue); 
	printf("After on first 4 bits,no is:%u",uRet);
	return 0;
}