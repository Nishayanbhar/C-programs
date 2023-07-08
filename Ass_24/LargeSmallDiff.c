/*
3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3) 
*/


#include<stdio.h>
#include<stdlib.h>

int CheckDiff(int Arr[], int iLength)
{
	int iCnt=0,iDiff=0,iLargest=Arr[0],iSmallest=Arr[0];
	
	for(iCnt=1;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iSmallest)
		{
			iSmallest=Arr[iCnt];
		}
		else if(Arr[iCnt]>iLargest)
		{
			iLargest=Arr[iCnt];
		}
		else
		{
			continue;
		}
		
	}
	printf("large %d\n",iLargest);
	printf("small %d\n",iSmallest);
	iDiff=iLargest-iSmallest;
	return iDiff;
}

int main()
{
 int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
 int *p = NULL;
 
 printf("Enter number of elements");
 scanf("%d",&iSize);
 if(iSize<=0)
 {
	 printf("Invalid Input");
	 return -1;
 }
 
 p = (int *)malloc(iSize * sizeof(int));
 if(p == NULL)
 {
	printf("Unable to allocate memory");
	return -1;
 }

 printf("Enter %d elements",iSize);
 for(iCnt = 0;iCnt<iSize; iCnt++)
 {
	printf("Enter element %d:",iCnt+1);
	scanf("%d",&p[iCnt]);
 }
 

 iRet = CheckDiff(p, iSize);

 printf("Diifference is%d",iRet);
 free(p);
 return 0;
}