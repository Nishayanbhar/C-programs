/*
5. Accept N numbers from user and accept one another number as NO , return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0 
*/
#include<stdio.h>
#include<stdlib.h>
int  Display(int Arr[], int iLength,int iNo)
{
	int iCnt=0,iFreq=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{       
		if(Arr[iCnt]==iNo)
		{
			iFreq+=1;
		}	
	}
	return iFreq;
}
int main()
{
 int iSize = 0,iVal=0,iRet = 0,iCnt = 0;
 int *p = NULL;
 printf("Enter number of elements");
 scanf("%d",&iSize);
 if(iSize<=0)
 {
	 printf("Invalid input");
	 return -1;
 }
 
 p = (int *)malloc(iSize * sizeof(int));
 if(p == NULL)
 {
	printf("Unable to allocate memory");
	return -1;
 }
 
 printf("\nEnter %d elements ",iSize);
 for(iCnt = 0;iCnt<iSize; iCnt++)
 {
	printf("\nEnter element %d:",iCnt+1);
	scanf("%d",&p[iCnt]);
 }
 
 printf("\nEnter Number to find Freq:");
 scanf("%d",&iVal);
 
 iRet=Display(p,iSize,iVal);
 printf("Frequency of %d is:%d",iVal,iRet);
 free(p);
 return 0;
} 