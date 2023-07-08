/*
1.Write a program which accept one number from user and off 7th bit of that,number if it is on. Return modified number.
Input : 79
Output : 15 
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(UINT uNo)
{
	UINT uMask=0Xffffffbf,uResult=0;
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
	printf("After Off 7th bit,no is:%u",uRet);
	return 0;
}