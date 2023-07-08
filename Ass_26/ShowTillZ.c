/*
3. Accept character from user. If it is capital then display all thecharacters from the input characters till Z. 
If input character is small then print all the characters in reverse order till a. 
In other cases return directly.
Input : Q
Output : Q R S T U V W X Y Z

Input : m
Output : m l k j i h g f e d c b a

Input : 8 
*/
#include<stdio.h>
void Display(char ch)
{
	int iAscii=ch,i=0;
	if(iAscii>=65&&iAscii<=90)
	{
		for(i=iAscii;i<=90;i++)
		{
			printf("%c\t",iAscii);
			iAscii++;
		}
	}
	
	else if(iAscii>=97&&iAscii<=122)
	{
		for(i=iAscii;i>=97;i--)
		{
			printf("%c\t",iAscii);
			iAscii--;
		}
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