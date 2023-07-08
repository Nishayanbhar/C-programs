/*
5. Accept string from user and check whether the string is palindrome
or not without considering its case.

Input : “1abccBA1”
Output : TRUE 
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkPalindrome(char* Str)
{
	char* First=Str;
	char* Last=Str;
	char temp;
	
	while(*Last!='\0')
	{
		Last++;
	}
	Last--;
	while(First<=Last)
	{
		if(*First!=*Last)
		{
			break;
		}
		First++;
		Last--;
	}
	if(*First!=*Last)
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
	BOOL bRet=FALSE;

	
	printf("\nEnter string: ");
	scanf("%[^'\n']s",arr);

	bRet=ChkPalindrome(arr);
	if(bRet==TRUE)
	{
		printf("\n Palindrome");
	}
	else
	{
		printf("\n Not Palindrome");
	}
	
	return 0;
}