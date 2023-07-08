/*
5. Write a program which accept string from user and count number of white spaces
Input : “MarvellouS”
Output : 0

Input : “MarvellouS Infosystems”
Output : 1

Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5 
*/

#include<stdio.h>
int CountSpace(char *str)
{
 int i=0,iSpaceCnt=0;
 for(i=0;str[i]!='\0';i++)
 {
	if(str[i]==32)
	{
		iSpaceCnt++;
	}	
 }
 return iSpaceCnt;
 
}

int main()
{
 char arr[20];
 int iRet = 0;
 
 printf("Enter string\t");
 scanf("%[^'\n']s",arr);
 iRet= CountSpace(arr);
 printf("%d",iRet);
 return 0;
} 