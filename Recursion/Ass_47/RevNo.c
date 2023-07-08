/*
5. Write a recursive program which accept number from user and return its reverse number.
Input : 523
Output : 325 
*/
#include<stdio.h>
int Reverse(int iNo)
{
	static int RevNo=0;
	int iDigit=0;
	
	if(iNo==0)
	{
		return 0;
	}
	if(iNo!=0)
	{
		iDigit=iNo%10;
		RevNo=(RevNo*10)+iDigit;
		iNo=iNo/10;

		Reverse(iNo);
	}
	return RevNo;
}

int main()
{
	static int iVal=0;
	int iRet=0;
	printf("Enter number:");
	scanf("%d",&iVal);

	iRet=Reverse(iVal);
	printf("Reverse nois:%d",iRet);
 return 0;
} 