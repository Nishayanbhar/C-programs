/*
4. Write a recursive program which accept number from user and return smallest digit
Input : 87983
Output : 3 
*/
#include<stdio.h>
int SmallestDigit(int iNo)
{
	static int Smallest=9;
	int iDigit=0;
	
	if(iNo==0)
	{
		return 0;
	}
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<Smallest)
		{
			Smallest=iDigit;
		}
		iNo=iNo/10;
		
		SmallestDigit(iNo);
	}
	return Smallest;
}

int main()
{
	static int iVal=0;
	int iRet=0;
	printf("Enter number:");
	scanf("%d",&iVal);

	iRet=SmallestDigit(iVal);
	printf("Smallest Digit is:%d",iRet);
 return 0;
} 