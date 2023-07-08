/*
3.Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)

Input : -5
Output : 8 (4 * 2)

Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2)
*/
#include<stdio.h>
int EvenFactorial(int iNo)
{
	int iFact=1,iCnt=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=2;iCnt<=iNo;iCnt+=2)
	{
		iFact=iFact*iCnt;
		/*if(iCnt%2==0)
		{
			iFact=iFact*iCnt;
		}*/
	}
	
	return iFact;
	
}
int main()
{
 int iValue = 0,iRet = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 iRet = EvenFactorial(iValue);
 printf("Even Factorial of number is %d",iRet);
 return 0;
} 