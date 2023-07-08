/*
3. Write a program which 2 strings from user and check whether firstN contents of two strings are equal or not. 
(Implement strcmp() function).
Note : If third parameter is greater than the size of second string then concat whole string after first string.
Input : “Marvellous Infosystems”
		“Marvellous Logic Building”
		10
Output : TRUE 
*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL StrCmp(char* Src, char* Dest, int iCnt)
{
	while(((*Src!='\0')&&(*Dest!='\0'))&&(iCnt!=0))
	{
		if(*Src!=*Dest)
		{
			break;
		}
		iCnt--;
		Src++;
		Dest++;
	}
	if(iCnt!=0)//break
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
	int n;
	
	printf("\nEnter 1st string: ");
	scanf("%[^'\n']s",arr);
	fflush(stdin);
	printf("\nEnter 2st string: ");
	scanf("%[^'\n']s",brr);
	
	fflush(stdin);
	printf("\nEnter Count:");
	scanf("%d",&n);
	
	bRet=StrCmp(arr,brr,n);
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