/*
1.Write a program which accept string from user and count number of capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/
#include<stdio.h>
int CountCapital(char *str)
{
 int iCnt = 0,i=0;
 
 /*for(i=0;str[i]!='\0';i++)
 {
	 if(str[i]>=65&&str[i]<=90)
	 { 
		iCnt++;
	 }
 }
 */
 while(str[i]!='\0')
 {
	 if(str[i]>=65&&str[i]<=90)
	 {
		iCnt++;
	 }
	 i++;
 }
 
 return iCnt;
}

int main()
{
 char arr[20];
 int iRet = 0;
 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 
 iRet = CountCapital(arr);
 printf("%d",iRet);
 return 0;
} 