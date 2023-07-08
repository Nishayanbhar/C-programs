/*
2. Design application for income tax department to calculate tax amount. 
According to the income tax department there is  no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there wills be 20% tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax amount.

Input : 6,00,000 	Output : 10,000 (0 + 10000)
Input : 4,50,000 	Output : 0
Input : 12,00,000 	Output : 90,000 (0 + 50000 + 40000)
*/

#include<stdio.h>
float CalTax(int iAmt)
{
	float fTax=0.0;	  
   	if(iAmt<=500000)
	{
		fTax=0;
	}
    
	if((iAmt>=500000)&&(iAmt<=1000000))
	{
		iAmt=iAmt-500000;
		if(iAmt<500000)
		{
			
		}
	}
	
	if((iAmt>=1000000)&&(iAmt<=2000000))
	{
		fTax=fTax+(iAmt-500000)*0.20;
		return fTax;
	}

	if((iAmt>=2000000) 
	{
		iAmt=iAmt-500000;
		fTax=fTax+(iAmt*0.30);
		return fTax;
	}
}
int main()
{
   	int iVal=0;
	float fRet=0.0;
	printf("Enter total income amt:");
	scanf("%d",&iVal);
	
	fRet=CalTax(iVal);
	if(fRet== -1)
	{
		printf("Invalid Input");
	}
	else
	{
		printf("\nTax amt is %.2f",fRet);
	}
	return 0;
}