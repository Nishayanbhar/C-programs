
/*
1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
	int iCnt=0,iEvenSum=0,iOddSum=0,iDiff=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEvenSum=iEvenSum+Arr[iCnt];
		}
		else
		{
			iOddSum=iOddSum+Arr[iCnt];
		}
		
	}
	iDiff=iEvenSum-iOddSum;
	return iDiff;
}
int main()
{
 int iSize = 0,iRet = 0,iCnt = 0;
 int *p = NULL;
 
 printf("Enter number of elements");
 scanf("%d",&iSize);
 if(iSize<=0)
 {
	 printf("Invalid size ");
	 return -1;
 }
 
 p = (int *)malloc(iSize * sizeof(int));
 if(p == NULL)
 {
 printf("\nUnable to allocate memory");
 return -1;
 }
 
 printf("\nEnter %d elements \n",iSize);
 for(iCnt = 0;iCnt<iSize; iCnt++)
 {
 printf("\nEnter element %d: ",iCnt+1);
 scanf("%d",&p[iCnt]);
 }
 
 iRet = Difference(p, iSize);

 printf("\nResult is %d",iRet);
 free(p);
 return 0;
}