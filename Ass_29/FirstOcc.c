/*
3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
 M
Output : 0

Input : “Marvellous Multi OS”
 W
Output : -1

Input : “Marvellous Multi OS”
 e
Output : 4
*/
#include<stdio.h>

int FirstOcc(char *str,char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			break;
		}
		i++;
	}
	if(str[i]!='\0')
	{
		return i;
	}
	else
	{
		return -1;
	}
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

 
 iRet = FirstOcc(arr,cValue);
 if(iRet!= -1)
 {
	printf("first Occurance index is %d",iRet);
 }
 else
 {
	 printf("there is no such character");
 }
 return 0;
} 