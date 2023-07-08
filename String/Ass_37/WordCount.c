/*
1.Write a program which accept string from user count number of words from string
Input : “Marvellous Multi OS”
Output : 3
Input : “ Marvellous Multi OS Pune”
Output : 4 
*/
#include<stdio.h>
int WordCount(char *Str)
{
	int iCnt=0,i=0;
	for(i=0;Str[i]!='\0';i++)
	{
		if((Str[i]!=' ')&&((Str[i+1]==' ')||(Str[i+1]=='\0')))
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	char arr[30]={'\0'};
	int iRet=0;

	printf("\nEnter string: ");
	scanf("%[^'\n']s",arr);
	
	iRet=WordCount(arr);
	printf("Noof words are : %d",iRet);
	
	return 0;
}