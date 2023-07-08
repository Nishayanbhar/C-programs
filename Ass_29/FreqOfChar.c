/*
2.Write a program which accept string from user and accept one character. Return frequency of that character.
Input : “Marvellous Multi OS”
 M
Output : 2

Input : “Marvellous Multi OS”
 W
Output : 0 

*/
#include<stdio.h>

int CountFreq(char *str,char ch)
{
	int i=0,iFreq=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			iFreq++;
		}
		i++;
	}
	
	return iFreq;
}
int main()
{
 char arr[20];
 char cValue='\0';
 int iRet = 0;
 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 
  printf("Enter the character");
  scanf(" %c",&cValue);

 
 iRet = CountFreq(arr,cValue);
 printf("freqency of char is:%d",iRet);
 return 0;
} 