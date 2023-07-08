/*
2. Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4 
*/

#include<stdio.h>
typedef unsigned int UINT;
void CommonON(UINT uNo1,UINT uNo2)
{
	UINT uMask=0X00000001,uResult=0;
	int iPos=0;
	
	if(uNo1<0)
	{
		uNo1= -uNo1;
	}
	if(uNo2<0)
	{
		uNo2= -uNo2;
	}
	
	while(uNo1!=0)
	{
		iPos++;
		uResult=uNo1 & uNo2 & uMask;
		if(uResult==uMask)
		{
			printf("%d\t",iPos);	
		}
		
		uNo1=uNo1>>1;
		uNo2=uNo2>>1;
	}

}

int main()
{
	UINT uValue1=0,uValue2;
	
	printf("Enter 1st no:");
	scanf("%u",&uValue1);
	
	printf("Enter 2nd no:");
	scanf("%u",&uValue2);

	CommonON(uValue1,uValue2);
	
	return 0;
}