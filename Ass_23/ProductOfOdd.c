/*
5. Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45

Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0 
*/

#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[], int iLength)
{
	int iCnt=0,iProduct=1,iFlag=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==1)
		{
			iProduct=iProduct*Arr[iCnt];
		}
		
	}
	return iProduct;
}

int main()
{
 int iSize = 0,iRet = 0,iCnt = 0;
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
	printf("\nEnter element %d:",iCnt+1);
	scanf("%d",&p[iCnt]);
 }
 
 iRet = Check(p, iSize);
 printf("Product is %d",iRet);
 free(p);
 return 0;
}