/*
4. Accept Character from user and check whether it is special symbolor not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE 

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	int iAscii=ch;
	if(iAscii>=32&&iAscii<=47)
	{
		return TRUE;
	}
	else if(iAscii>=58&&iAscii<=64)
	{
		return TRUE;
	}
	else if(iAscii>=91&&iAscii<=96)
	{
		return TRUE;
	}
	else if(iAscii>=123&&iAscii<=126)
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
	printf("It is special symbol");
 }
 else
 {
	printf("It is not a Special Symbol");
 }

 return 0;
} 