/*
4. Write a program which accept string from user and display only digits from that string.
Input : “marve89llous121”
Output : 89121

Input : “Demo”
Output : 

*/
#include<stdio.h>
void DisplayDigits(char *str)
{
 int i=0;
 for(i=0;str[i]!='\0';i++)
 {
	if(str[i]>=48&&str[i]<=57)
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
 DisplayDigits(arr);
 return 0;
} 