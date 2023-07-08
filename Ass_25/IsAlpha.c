/*
1. Accept Character from user and check whether it is alphabet or not (A-Z a-z).
Input : F
Output : TRUE

Input : &
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	int iAscii=ch;
	if(((iAscii>=65)&&(iAscii<=90))||((iAscii>=97)&&(iAscii<=122)))
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
 
 bRet = ChkAlpha(cValue);
 if(bRet == TRUE)
 {
	printf("It is Character");
 }
 else
 {
	printf("It is not a Character");
 }

 return 0;
} 