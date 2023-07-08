/*
2. Write a program which accept string from user and count number of small characters.
Input : “Marvellous”
Output : 9 

*/
#include<stdio.h>
int CountSmall(char *str)
{
 int iCnt = 0,i=0;
 
 /*for(i=0;str[i]!='\0';i++)
 {
	 if(str[i]>=97&&str[i]<=122)
	 { 
		iCnt++;
	 }
 }
 */
 
 while(str[i]!='\0')
 {
	 if(str[i]>=97&&str[i]<=122)
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
 
 iRet = CountSmall(arr);
 printf("%d",iRet);
 return 0;
} 