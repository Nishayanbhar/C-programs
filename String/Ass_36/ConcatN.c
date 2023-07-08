/*
1. Write a program which accepts 2 strings from user and concat N characters of second string after first string.
Value of N should be accepted from user. (Implement strncat() function).

Note : If third parameter is greater than the size of second string then
concat whole string after first string.

Input : “Marvellous Infosystems”
		“Logic Building”
		5
Output : “Marvellous Infosystems Logic”
*/

#include<stdio.h>
#include<stdlib.h>
void StrNCatX(char* src, char* dest, int iCnt)
{
 while(*src != '\0') 
 {
	src++;
 }
 while((*dest!='\0')&&(iCnt!=0)) 
 {
	*src= *dest;
	iCnt--;
	dest++;
	src++;
	
 }
 *src = '\0';
}

int main()
{
 int iVal=0;
 char arr[50] = {'\0'};
 char brr[30] = {'\0'};
 
 printf("Enter 1st string : ");
 scanf("%[^'\n']s",arr);
 fflush(stdin);
 
 printf("\nEnter 2nd string: ");
 scanf("%[^'\n']s",brr);
 fflush(stdin);
 printf("\nEnter No of Char to copy");
 scanf("%d",&iVal);

 StrNCatX(arr,brr,iVal);

 printf("%s",arr); // Marvellous Infosystems Logic

 return 0;
} 