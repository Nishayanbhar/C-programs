/*
3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
Input : “MarvellouS”
Output : 6 (8-2) 
*/
#include<stdio.h>
int Difference(char *str)
{
 int iSmallCnt=0,iCapCnt=0,iDiff=0,i=0;
 
 while(str[i]!='\0')
 {
	 if(str[i]>=65&&str[i]<=90)
	 {
		iCapCnt++;
	 }
	 
	 if(str[i]>=97&&str[i]<=122)
	 {
		iSmallCnt++;
	 }
	 
	 i++;
 }
 iDiff=iSmallCnt-iCapCnt;
 return iDiff;
}

int main()
{
 char arr[20];
 int iRet = 0;
 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 
 iRet = Difference(arr);
 printf("%d",iRet);
 return 0;
} 