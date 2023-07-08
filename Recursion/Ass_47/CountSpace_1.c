/*
1. Write a recursive program which accept string from user and count white spaces.
Input : HE llo WOr lD
Output : 3 
*/
#include<stdio.h>
int Count(char *Str)
{
	static int iCnt=0;
	
	if(*Str!= '\0')
	{
		if(*Str== ' ')
		{
			iCnt++;
		}
		Str++;
		Count(Str);
	}
	return iCnt;
}
int main()
{
 int iRet = 0;
 char arr[20]={'\0'};
 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 
 iRet = Count(arr);
 printf("Len is:%d",iRet);

 return 0;
} 