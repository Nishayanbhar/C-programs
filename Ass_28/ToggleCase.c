/*
3.Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os 
*/
#include<stdio.h>
void ToggleCase(char *str)
{
 int i=0;
 for(i=0;str[i]!='\0';i++)
 {
	 if(str[i]>=65&&str[i]<=90)
	{
		
		printf("%c",str[i]+32);
	}
	else if(str[i]>=97&&str[i]<=122)
	{
		
		printf("%c",str[i]-32);
	}
	else
	{
		printf("%c",str[i]);
	}
 }
 
}

int main()
{
 char arr[20];
 
 printf("Enter string\t");
 scanf("%[^'\n']s",arr);
 ToggleCase(arr);
 return 0;
} 