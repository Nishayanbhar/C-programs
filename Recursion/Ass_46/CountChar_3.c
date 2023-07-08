/*
3. Write a recursive program which accept string from user and count number of characters.
Input : Hello
Output : 5
*/
#include<stdio.h>
int Strlen(char *Str)
{
	static int iCnt=0;
	if(*Str!='\0')
	{
		iCnt++;
		Str++;
		Strlen(Str);
	}
	return iCnt;
}
int main()
{
 int iRet = 0;
 char arr[20]={'\0'};
 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 
 iRet = Strlen(arr);
 printf("Len is:%d",iRet);

 return 0;
} 