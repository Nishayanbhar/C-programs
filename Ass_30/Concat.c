/*
5. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
Input : “Marvellous Infosystems”
 “Logic Building”
Output : “Marvellous Infosystems Logic Building” 
*/
#include<stdio.h>
#include<stdlib.h>
void Concat(char *src, char *dest)
{
 while(*src!='\0')
 {
	 src++;
 }
 while(*dest!='\0')
 {
	 *src=*dest;
	 src++;
	 dest++;
 }
*src='\0';
}

int main()
{
 char arr[30];
 char brr[30]="Yanbhar";
 
 printf("Enter first String:");
 scanf("%[^'\n']s",arr);
 fflush(stdin);
 printf("Enter second String:");
 scanf("%[^'\n']s",brr);

 
 Concat(arr,brr);
 printf("%s",arr);  
 return 0;
}