/*
1. Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3  
*/

#include<stdio.h>
#include<stdlib.h>
int  Display(int Arr[], int iLength)
{
	int iCnt=0,iFreq=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{       
		if(Arr[iCnt]%2==0)
		{
			iFreq++;
		}	
	}
	return iFreq;
}

int main()
{
 int iSize = 0,iRet = 0,iCnt = 0;
 int *p = NULL;
 
 printf("Enter number of elements\n");
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
	return -2;
 }
 
 printf("\nEnter %d elements ",iSize);
 for(iCnt = 0;iCnt<iSize; iCnt++)
 {
 printf("\nEnter element %d:",iCnt+1);
 scanf("%d",&p[iCnt]);
 }
 
 iRet=Display(p, iSize);
 printf("\nFrequency of even numbers is:%d",iRet);
 free(p);
 return 0;
} 