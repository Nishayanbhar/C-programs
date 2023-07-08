/*
2. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :
 A B C D
 a b c d
 A B C D
 a b c d
 */
 
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i=0,j=0,k=0,iAscii=0;
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
		if(i%2==1)	//odd index of row
		{
			iAscii=65;
			for(j=1;j<=iCol;j++)
			{
				printf("%c\t",iAscii);
				iAscii++;
			}
			printf("\n");
		}
		else	//even row index
		{
			iAscii=97;
			for(j=1;j<=iCol;j++)
			{
				printf("%c\t",iAscii);
				iAscii++;
			}
			printf("\n");
		}
	}
}
int main()
{
 int iValue1 = 0, iValue2 = 0;
 printf("Enter number of rows and columns");
 scanf("%d %d",&iValue1, &iValue2);
 Pattern(iValue1, iValue2);
 return 0;
}