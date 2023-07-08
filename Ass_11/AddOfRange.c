/*
3. Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)

Input : 23 30
Output : 212

Input : 10 18
Output : 126

Input : -10 2
Output : Invalid range

Input : 90 18
Output : Invalid range
*/
#include<stdio.h>
void RangeSum(int iStart , int iEnd)
{
	int iCnt=0,iAdd=0;
	if((iStart>iEnd)||(iStart<0))
	{
		printf("Invlaid range");
	}
	else
	{
		for(iCnt=iStart;iCnt<=iEnd;iCnt++)
		{
			iAdd=iAdd+iCnt;
		}
		printf("Addition is%d",iAdd);
	}
	
	
}
int main()
{
 int iValue1 = 0, iValue2 = 0, iRet =0;
 printf("Enter starting point");
 scanf("%d",&iValue1);
 printf("Enter ending point");
 scanf("%d",&iValue2);
 RangeSum(iValue1, iValue2);
 return 0;
}