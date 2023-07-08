/*
write a program which accept number from user and return difference between summation of all its factors and non factors. 
Input :  12 Output : -34  (16 - 50)  
Input :  10  Output : -29 (8 - 37)
*/
#include<stdio.h> 
int SumNonFact(int iNo)
{    
	int iCnt=0,iSum=0;
	int NonFactSum=0;
	int Diff=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum+=iCnt;
		}
		if((iNo%iCnt)!=0)
		{
			NonFactSum+=iCnt;
		}
	}
	/*intf("summation of factors:%d\n",iSum);
	printf("summation of non factors %d\n",NonFactSum);*/
	Diff= iSum-NonFactSum;
	return Diff;

} 
int main() 
{  
	int iValue = 0;  
	int iRet = 0; 
	printf("Enter number"); 
	scanf("%d",&iValue); 
	iRet=SumNonFact(iValue); 
	printf("%d",iRet); 
 return 0; 
} 