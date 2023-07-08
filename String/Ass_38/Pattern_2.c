/*

2.Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :
		M a r v e l l o u s
		M a r v e l l o u
		M a r v e l l o
		M a r v e l l
		M a r v e l
		M a r v e
		M a r v
		M a r
		M a
		M

Input : “PPA”
Output : 
	P P A
	P P
	P 

*/
#include<stdio.h>
void PrintPattern(char* Str)
{
	int i=0,j=0,Size=0;
	while(Str[i]!='\0')
	{
		Size++;
		i++;
	}
	for(i=0;i<Size;i++)
	{
		for(j=0;j<Size-i;j++)
		{
			printf("%c\t",Str[j]);
		}
		printf("\n");
	}
	
}
int main()
{
	char arr[30]={'\0'};
	
	printf("\nEnter string: ");
	scanf("%[^'\n']s",arr);
	
	PrintPattern(arr);
	
	return 0;
}