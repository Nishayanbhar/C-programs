/*
4. Write a program which accept string from user and copy small characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi” 
*/
#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
 int i=0;
 while(*src!='\0')
 {
	if((*src>='a')&&(*src<='z'))
	{
		*dest=*src;
		dest++;
	}
	src++;
 }
 *dest='\0';
}
int main()
{
 char arr[30];
 char brr[30];
 printf("Enter String:");
 scanf("%[^'\n']s",arr);
 
 StrCpyX(arr,brr);
 printf("%s",brr);  
 return 0;
}