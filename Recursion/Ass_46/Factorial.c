/*
4. Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120 
*/
#include<stdio.h>
int Factorial(int iNo)
{
	static int iFact=1;
	if(iNo>=1)
	{
		iFact=iFact*iNo;
		iNo--;
		Factorial(iNo);
	}
	return iFact;
}
int main()
{
 int iRet = 0;
 static int iVal=0;
 printf("Enter No");
 scanf("%d",&iVal);
 
 iRet = Factorial(iVal);
 printf("Factorial is:%d",iRet);

 return 0;
} 