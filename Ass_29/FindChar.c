/*
1.Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

Input : “Marvellous Multi OS”
 e
Output : TRUE

Input : “Marvellous Multi OS”
 W
Output : FALSE
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkChar(char *str,char ch)
{
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			break;
		}
		i++;
	}
	
	if(str[i]==ch)
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
 char arr[20];
 char cValue='\0';
 BOOL bRet = FALSE;
 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 
  printf("Enter the character");
  scanf(" %c",&cValue);

 
 bRet = ChkChar(arr,cValue);
 if(bRet == TRUE)
 {
	printf("Character found");
 }
 else
 {
	printf("Character not found");
 }
 return 0;
} 