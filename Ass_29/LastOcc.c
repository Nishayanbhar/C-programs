/*
4.Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
 M
Output : 11

Input : “Marvellous Multi OS”
 W
Output : -1

Input : “Marvellous Multi OS”
 e
Output : 4
*/

#include<stdio.h>

int LastOcc(char *str,char ch)
{
	int i=0,iPos= -1;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			iPos=i;
		}
		i++;
	}
	return iPos;
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

 
 iRet = LastOcc(arr,cValue);
 if(iRet!= -1)
 {
	printf("Last Occurance index is %d",iRet);
 }
 else
 {
	 printf("there is no such character");
 }
 return 0;
} 