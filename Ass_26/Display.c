/*
5. Accept character from user and display its ASCII value in decimal,octal and hexadecimal format.
Input : A
Output : Decimal 65
Octal 0101
Hexadecimal 0X41
*/
#include<stdio.h>
void Display (char ch)
{
	int iAscii=ch;
	printf("Decimal:%d\n",iAscii);
	printf("Octal:%o\n",iAscii);
	printf("Hexadecimal:%x\n",iAscii);
}
int main()
{
 char cValue = '\0';
 printf("Enter character");
 scanf("%c",&cValue);
 
 Display(cValue);
 return 0;
}