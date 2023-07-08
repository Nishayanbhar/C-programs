/*
1.Write a program which accept string from user and convert it into lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os 
*/
#include<stdio.h>
void ToLower(char *str)
{
 int i=0;
 for(i=0;str[i]!='\0';i++)
 {
	if(str[i]>=65&&str[i]<=90)
	{
		
		printf("%c",str[i]+32);
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

 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 ToLower(arr);
 return 0;
} 