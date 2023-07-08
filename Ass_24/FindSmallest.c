/*
2. Accept N numbers from user and return the smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 3 
*/

#include<stdio.h>
#include<stdlib.h>

int CheckSmallest(int Arr[], int iLength)
{
	int iCnt=0,iSmallest=Arr[0];
	for(iCnt=1;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iSmallest)
		{
			iSmallest=Arr[iCnt];
		}
	}
	return iSmallest;
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
 

 iRet = CheckSmallest(p, iSize);

 printf("%d",iRet);
 free(p);
 return 0;
}