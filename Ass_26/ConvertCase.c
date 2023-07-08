/*
2. Accept character from user. If character is small display its corresponding capital character, 
and if it is capital then display its corresponding small. In other cases display as it is.
Input : Q
Output : q

Input : m
Output : M

Input : 4
Output : 4

Input : %
Output : % 
*/
#include<stdio.h>
void Display(char ch)
{
	int iAscii=ch;
	if(iAscii>=65&&iAscii<=90)
	{
		iAscii+=32;
		printf("%c",iAscii);
	}
	else if(iAscii>=97&&iAscii<=122)
	{
		iAscii-=32;
		printf("%c",iAscii);
	}
	else
	{
		printf("%c",iAscii);
	}
}
int main()
{
 char cValue = '\0';
 printf("Enter character");
 scanf("%c",&cValue);
 Display(cValue);

 return 0;
} 