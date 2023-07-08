/*
2. Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy()function)
Input : “Marvellous Multi OS”
 10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/
#include<stdio.h>
void StrNCpyX(char *src, char *dest, int iCnt)
{

	if(iCnt<0)
	{
		iCnt= -iCnt;
	}
 while((*src!='\0')&&(iCnt!=0))
 {
	*dest=*src;
	src++;
	dest++;
	iCnt--;
 }
 *dest='\0';

}
int main()
{
 char arr[30];
 char brr[30];
 int iVal=0;
 
 printf("Enter String:");
 scanf("%[^'\n']s",arr);
 
 printf("Enter length");
 scanf("%d",&iVal);
 
 StrNCpyX(arr,brr,iVal);
 printf("%s",brr); 

 return 0;
} 