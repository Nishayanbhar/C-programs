/*
1. Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer.
If bill bill amount is less than 500 then there is no discount , 
if bill amount is less than 1500 and more than 500 they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.

Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.

Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145 
*/
#include<stdio.h>
float CalDiscount(int iAmt)
{
	float fDiscount=0.0;
	
	if(iAmt<=0)
	{
		return 0;
	}
	if(iAmt<=500)
	{
		return iAmt;
	}
	else if((iAmt>=500)&&(iAmt<=1500))
	{
		
		return iAmt-(iAmt*0.10);
	}
	else 
	{
		
		return iAmt-(iAmt*0.15);
	}
}

int main()
{
	int iVal=0;
	float fRet=0.0;
	printf("Enter total bill amt:");
	scanf("%d",&iVal);
	
	fRet=CalDiscount(iVal);
	printf("\nafter discount bill amt is %.2f",fRet);
	
	return 0;
}