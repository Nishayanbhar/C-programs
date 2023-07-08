/*
Input : 5
Output : * * * * * 
*/
#include<stdio.h>
void Display(int iNo)
{
	static int i=1;
	if(i<=iNo)
	{
		printf("*\t");
		i++;
		Display(iNo);
	}
}

int main()
{
	int iVal=0;
	printf("Enter number:");
	scanf("%d",&iVal);
 Display(iVal);
 return 0;
} 