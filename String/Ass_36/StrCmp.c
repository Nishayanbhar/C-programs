/*
2. Write a program which 2 strings from user and check whether contents of two strings are equal or not. 
(Implement strcmp() function).
Input : “Marvellous Infosystems”
		“Marvellous Infosystems”
Output : TRUE 

*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL StrCmp(char* Src, char* Dest)
{
	while((*Src!='\0')&&(*Dest!='\0'))
	{
		if(*Src!=*Dest)
		{
			break;
		}
		Src++;
		Dest++;
	}
	if(*Src!=*Dest)//break
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
int main()
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};
	BOOL bRet=1;
	
	printf("\nEnter 1st string: ");
	scanf("%[^'\n']s",arr);
	fflush(stdin);
	printf("\nEnter 2st string: ");
	scanf("%[^'\n']s",brr);
	
	bRet=StrCmp(arr,brr);
	if(bRet==TRUE)
	{
		printf("\nEqual");
	}
	else
	{
		printf("\nNot Equal");
	}
	return 0;
}