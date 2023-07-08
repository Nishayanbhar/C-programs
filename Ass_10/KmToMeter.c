/*
3. Write a program which accept distance in kilometre and convert it into meter. 
(1kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/
#include<stdio.h>
#define KM 1000
int KMtoMeter(int iNo)
{
	int iMeter=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	iMeter=iNo*KM;
	return iMeter;
}
int main()
{
 int iValue = 0, iRet = 0;
 printf("Enter distance(Km)");
 scanf("%d",&iValue);
 iRet = KMtoMeter(iValue);
 printf("%d",iRet);
 return 0;
}