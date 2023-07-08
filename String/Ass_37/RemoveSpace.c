/*
4. Write a program which accept string from user and copy the contents into another string by removing extra white spaces.
Input : “Marvel lous  multi  OS”
Output : “Marvellous multi OS” 
*/
#include<stdio.h>
#include<string.h>
void RemoveSpace(char *Src, char *Dest)
{
	int i=0,j=0;
	for(i=0;Src[i]!='\0';i++)
	{
		if((Src[i]==' ')&&((Src[i+1]==' ')||(Src[i+1]=='\0')))//skip first sapce if two continous orlast Sapce
		{
			continue;
		}
		else
		{
			Dest[j]=Src[i];
			j++;
		}		
	}
		Dest[j]='\0';
}
int main()
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};
	int aLen=0,bLen=0;
	
	printf("\nEnter string: ");
	scanf("%[^'\n']s",arr);
	
	RemoveSpace(arr,brr);
	printf("\n%s",brr);
	
	
	return 0;
}