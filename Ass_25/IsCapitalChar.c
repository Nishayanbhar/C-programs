/*
2. Accept Character from user and check whether it is capital or not (A-Z).
Input : F
Output : TRUE

Input : d
Output : FALSE 
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
	int iAscii=ch;
	if((iAscii>=65)&&(iAscii<=90))
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
 
 bRet = ChkCapital(cValue);
 if(bRet == TRUE)
 {
	printf("It is Capital Character");
 }
 else
 {
	printf("It is not a Capital Character");
 }

 return 0;
} 