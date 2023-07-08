/*
3. Write a recursive program which accept string from user and count number of small characters.
Input : HElloWOrlD
Output : 5 
*/
#include<stdio.h>
int Count(char *Str)
{
	static int iCnt=0;
	if(*Str!='\0')
	{
		if((*Str>='a')&&(*Str<='z'))
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
 printf("Count is:%d",iRet);

 return 0;
} 