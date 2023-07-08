/*
1. Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 * 
*/
#include<stdio.h>
void Display(int No)
{
	if(No>=1)
	{
		printf("%d\t*\t",No);
		No--;
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