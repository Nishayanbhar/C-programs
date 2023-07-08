/*
2. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1 
*/

#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[], int iLength, int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			return iCnt;
		}
	}
	return -1;
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
 
 printf("Enter number to be search");
 scanf("%d",&iValue);

 iRet = Check(p, iSize,iValue);

 printf("%d",iRet);
 free(p);
 return 0;
}