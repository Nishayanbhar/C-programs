/*
2. Write a recursive program which accept number from user and return largest digit
Input : 87983
Output : 9 
*/
#include<stdio.h>
int LargestDigit(int iNo)
{
	static int Largest=0;
	int iDigit=0;
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit>Largest)
		{
			Largest=iDigit;
		}
		iNo=iNo/10;
		
		LargestDigit(iNo);
	}
	return Largest;
}

int main()
{
	static int iVal=0;
	int iRet=0;
	printf("Enter number:");
	scanf("%d",&iVal);

	iRet=LargestDigit(iVal);
	printf("Largest Digit is:%d",iRet);
 return 0;
} 