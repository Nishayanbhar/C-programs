/*
3. Accept Character from user and check whether it is digit or not(0-9).
Input : 7
Output : TRUE

Input : d
Output : FALSE 

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
	int iAscii=ch;
	if((iAscii>=48)&&(iAscii<=57))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
 char cValue = '\0';
 BOOL bRet = FALSE;
 
 printf("Enter character:");
 scanf("%c",&cValue);
 
 bRet = ChkDigit(cValue);
 if(bRet == TRUE)
 {
	printf("It is a Digit");
 }
 else
 {
	printf("It is not a Digit");
 }

 return 0;
} 