/*
4. Accept Character from user and check whether it is small case or not (a-z).
Input : g
Output : TRUE

Input : D
Output : FALSE 
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
	int iAscii=ch;
	if((iAscii>=97)&&(iAscii<=122))
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
	printf("It is a small char");
 }
 else
 {
	printf("It is not a small char");
 }

 return 0;
} 