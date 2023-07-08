/*
5. Write a recursive program which accept number from user and return its product of digits.
Input : 523
Output : 30 
*/
#include<stdio.h>
int DigitMul(int iNo)
{
	static int iProduct=1;
	int iRem=0;
	if(iNo!=0)
	{
		iRem=iNo%10;
		iProduct=iProduct*iRem;
		iNo=iNo/10;
		
		DigitMul(iNo);
	}
	return iProduct;
}
int main()
{
 int iRet = 0;
 static int iVal=0;
 printf("Enter No");
 scanf("%d",&iVal);
 
 iRet = DigitMul(iVal);
 printf("Product of No of Digit is:%d",iRet);

 return 0;
} 