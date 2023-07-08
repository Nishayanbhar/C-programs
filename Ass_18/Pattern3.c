/*
2. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 5 iCol = 5
Output : $ * * * *
		 # $ * * *
		 # # $ * *
		 # # # $ *
		 # # # # $ 
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{	
	int i=0,j=0;
	if(iRow<0)
	{
		iRow= -iRow;
	}
	if(iCol<0)
	{
		iCol= -iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(j==i)
			{
				printf("$\t");
			}
			else if(j<i)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
	 
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter no of rows and col(must be same)");
	scanf("%d %d",&iValue1,&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}