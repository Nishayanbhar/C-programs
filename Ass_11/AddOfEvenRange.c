/*
4.Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)

Input : 23 30
Output : 108

Input : 10 18
Output : 70

Input : -10 2
Output : Invalid range

Input : 90 18
Output : Invalid range
*/
#include<stdio.h>
void RangeSumEven(int iStart , int iEnd)
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
			if(iCnt%2==0)
			{
				iAdd=iAdd+iCnt;
			}
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
 RangeSumEven(iValue1, iValue2);
 //iRet = RangeSumEven(iValue1, iValue2);
 //printf("Addition is %d",iRet);
 return 0;
} 