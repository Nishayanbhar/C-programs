/*
2. Accept N numbers from user and return difference between frequency of even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
*/

#include<stdio.h>
#include<stdlib.h>
int  Display(int Arr[], int iLength)
{
	int iCnt=0,iDiff=0,iEvenFreq=0,iOddFreq=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{       
		if(Arr[iCnt]%2==0)
		{
			iEvenFreq+=1;
		}
		else
		{
			iOddFreq+=1;
		}
	}
	iDiff=iEvenFreq-iOddFreq;
	/*if(iDiff<0)
	{
		iDiff= -iDiff;
	}*/
	return iDiff;
}
int main()
{
 int iSize = 0,iRet = 0,iCnt = 0;
 int *p = NULL;
 printf("Enter number of elements");
 scanf("%d",&iSize);
 p = (int *)malloc(iSize * sizeof(int));
 if(p == NULL)
 {
 printf("Unable to allocate memory");
 return -1;
 }
 printf("Enter %d elements ",iSize);
 for(iCnt = 0;iCnt<iSize; iCnt++)
 {
 printf("Enter element %d:",iCnt+1);
 scanf("%d",&p[iCnt]);
 }
 iRet=Display(p, iSize);
 printf("Frequency difference is:%d",iRet);
 

 free(p);
 return 0;
} 