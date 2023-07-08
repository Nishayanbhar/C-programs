/*
4. Write a program which accept string from user and check whether it contains vowels in it or not.
Input : “marvellous”
Output : TRUE

Input : “Demo”
Output : TRUE

Input : “xyz”
Output : FALSE 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
 int i=0;
 while(str[i]!='\0')
 {
	 if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	 {
		break;
	 }
	 i++;
 }
 if(str[i]!='\0')
 {
	 return TRUE;
 }
 else
 {
	 return FALSE;
 }
}

int main()
{
 char arr[20];
 BOOL bRet = FALSE;
 
 printf("Enter string:\t");
 scanf("%[^'\n']s",arr);
 
 bRet = ChkVowel(arr);
 if(bRet==TRUE)
 {
	printf("String contains vowel");
 }
 else
 {
	 printf("string does not contains any vowel");
 }
 return 0;
} 