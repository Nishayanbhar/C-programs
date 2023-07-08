/*
5. Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM” 
*/
#include<stdio.h>
#include<string.h>
void Reverse(char *str)
{
 int i=0;
 int len= strlen(str);
 
 for(i=len-1;i>=0;i--)
 {
	 printf("%c",str[i]);
 }
 
}

int main()
{
 char arr[20];
 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 
 Reverse(arr);
 return 0;
} 