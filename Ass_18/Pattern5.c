/*
5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 1 2 3 4
		 2 3 4
		 3 4
		 4
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
		for(j=i;j<=iCol;j++)
		{
			printf("%d\t",j);
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