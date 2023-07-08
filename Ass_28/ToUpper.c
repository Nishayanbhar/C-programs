/*
2.Write a program which accept string from user and convert it into upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS 

*/
#include<stdio.h>
void ToUpper(char *str)
{
 int i=0;
 for(i=0;str[i]!='\0';i++)
 {
	if(str[i]>=97&&str[i]<=122)
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
 ToUpper(arr);
 return 0;
} 