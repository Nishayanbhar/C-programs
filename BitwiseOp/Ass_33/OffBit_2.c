/*
2.Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
Input : 577
Output : 1 
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(UINT uNo)
{
	UINT uMask=0Xfffffdbf,uResult=0;
	if(uNo<0)
	{
		uNo= -uNo;
	}
	
	uResult= uNo&uMask;


	return uResult;
}
int main()
{
	UINT uValue=0,uRet=0;
	printf("Enter no:");
	scanf("%u",&uValue);
	
	uRet= OffBit(uValue); 
	printf("After Off 7th and 10th bit,no is:%u",uRet);
	return 0;
}