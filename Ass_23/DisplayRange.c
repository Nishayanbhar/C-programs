/*
4. Accept N numbers from user and accept Range, Display all elements from that range
Input : N : 6
Elements : 85 66 3 76 93 88
Start: 1
End : 4
Output : 66 3 76 93 
 
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength, int iStart, int iEnd)
{
	int iCnt=0;
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	
}

int main()
{
 int iSize = 0,iCnt = 0, iValue1 = 0,iValue2=0;
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

 printf("Enter %d elements\n",iSize);
 for(iCnt = 0;iCnt<iSize; iCnt++)
 {
	printf("Enter element %d:",iCnt+1);
	scanf("%d",&p[iCnt]);
 }
 
 printf("Enter first index");
 scanf("%d",&iValue1);
 
 printf("Enter second index");
 scanf("%d",&iValue2);
 
 if((iValue1<=0)||(iValue2>iSize))
 {
	 printf("Invalid Range");
	 return-1;
 }


 Display(p, iSize,iValue1,iValue2);
 free(p);
 return 0;
}