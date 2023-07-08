/*
4. Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 0

Input : N : 6
Elements : 85 11 3 15 11 111
Output : 2 
*/

#include<stdio.h>
#include<stdlib.h>

int  Display(int Arr[], int iLength)
{
	int iCnt=0,iFreq=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{	           
		if(Arr[iCnt]==11)
		{
			iFreq+=1;
		}
		
	}
	return iFreq;
}

int main()
{
 int iSize = 0,iRet = 0,iCnt = 0;
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
 printf("Enter element %d:",iCnt+1);
 scanf("%d",&p[iCnt]);
 }
 
 iRet=Display(p, iSize);
 printf("Frequency of 11 is:%d",iRet);
 free(p);
 return 0;
} 