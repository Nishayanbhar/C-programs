/*
2. Write a program which accept String from user and return length of largest word.
Input : “Marvellous Multi OS Infosystems”
Output : 11 
*/
#include<stdio.h>
int LargestWord(char *Str)
{
	printf("\n In Fun");
	int i=0,MaxLen=0,Cnt=0;
	for(i=0;Str[i]!='\0';i++)
	{
		
		if(Str[i]==' ')
		{
			continue;
		}
		else
		{
			Cnt=0;
			while((Str[i]!=' ')&&((Str[i+1]== ' ')||(Str[i]!= '\0')))
			{
				Cnt++;
				i++;
			}
		}
		
		if(Cnt>MaxLen)
		{
			MaxLen=Cnt;
		}
	}
	return MaxLen;
	
}
int main()
{
	char arr[30]={'\0'};
	int iRet=0;

	printf("\nEnter String: ");
	scanf("%[^'\n']s",arr);
	
	iRet=LargestWord(arr);
	printf("\nLargestWord length: %d",iRet);
	
	return 0;
}