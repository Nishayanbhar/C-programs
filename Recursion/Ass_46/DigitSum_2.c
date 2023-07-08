/*
2. Write a recursive program which accept number from user and return summation of its digits.
Input : 879
Output : 24 
*/
#include<stdio.h>
int SumDigit(int iNo)
{
	static int Sum=0;
	int iRem=0;
	if(iNo!=0)
	{
		iRem=iNo%10;
		Sum=Sum+iRem;
		iNo=iNo/10;
		
		SumDigit(iNo);
	}
	return Sum;
}

int main()
{
	static int iVal=0;
	int iRet=0;
	printf("Enter number:");
	scanf("%d",&iVal);

	iRet=SumDigit(iVal);
	printf("Summation is:%d",iRet);
 return 0;
} 