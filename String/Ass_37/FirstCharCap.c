/*
5. Write a program which accept string from user and replace each
occurrence of first character of each word into capital case.

Input : “marvellous infosystems by Piyush khairnar”
Output : “Marvellous Infosystems By Piyush Khairnar” 
*/
#include<stdio.h>
int CapitalFirst(char *Str)
{
	int i=0;
	for(i=0;Str[i]!='\0';i++)
	{
		if((i==0)&&(Str[i]!=' '))
		{
			Str[i]=Str[i]-32;
		}
		if((Str[i]==' ')&&(Str[i+1]!=' '))
		{
			if((Str[i+1]>='a')&&(Str[i+1]<='z'))
			{
				Str[i+1]=Str[i+1]-32;
			}
		}
	}
}
int main()
{
	char arr[30]={'\0'};

	printf("\nEnter String: ");
	scanf("%[^'\n']s",arr);
	
	CapitalFirst(arr);
	printf("\n%s",arr);
	
	return 0;
}