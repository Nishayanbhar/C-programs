/*
5.Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f 
*/
#include<stdio.h>
void Display(int No)
{
	static char cChar='a';
	if(No>=1)
	{
		printf("%c\t",cChar);
		No--;
		cChar++;
		Display(No);
	}
}

int main()
{
	static int iVal=0;
	printf("Enter number:");
	scanf("%d",&iVal);
 Display(iVal);
 return 0;
} 