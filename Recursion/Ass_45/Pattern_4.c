/*
4.Write a recursive program which display below pattern.
Input : 6
Output : A B C D E F 
*/
#include<stdio.h>
void Display(int No)
{
	static char cChar='A';
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