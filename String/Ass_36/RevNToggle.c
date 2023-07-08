/*
4. Accept sing from user and reverse the contents of that string by toggling the case.
Input : “aCBdef”
Output : “FEDcbA” 
*/
#include<stdio.h>
void RevNToggle(char* Str)
{
	char* First=Str;
	char* Last=Str;
	char temp;
	
	while(*Last!='\0')
	{
		if((*Last>='A')&&(*Last<='Z'))
		{
			*Last=*Last+32;
		}
		else if((*Last>='a')&&(*Last<='z'))
		{
			*Last=*Last-32;
		}
		Last++;
	}
	Last--;
	while(First<=Last)
	{
		temp=*First;
		*First=*Last;
		*Last=temp;
		
		First++;
		Last--;
	}
	
	
	
}
int main()
{
	char arr[30]={'\0'};
	
	printf("\nEnter string: ");
	scanf("%[^'\n']s",arr);

	RevNToggle(arr);
	printf("\n after Reverse & toggle : %s ",arr);
	return 0;
}