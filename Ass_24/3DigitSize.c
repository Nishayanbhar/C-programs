/*
4. Accept N numbers from user and display all such numbers which contains 3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858 
*/


#include<stdio.h>
#include<stdlib.h>

void DisplayNo(int Arr[], int iLength)
{
	int iCnt=0,iNo=0,iDigitCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iNo=Arr[iCnt];
		iDigitCnt=0;
		while((iNo!=0)&&(iDigitCnt<=3))
		{
			iNo=iNo/10;
			iDigitCnt+=1;
			
		}
	
		if(iDigitCnt==3)
		{
			printf("%d\t",Arr[iCnt]);
		}
		
	}
	
}

int main()
{
 int iSize = 0,iCnt = 0, iValue = 0;
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
 
  DisplayNo(p, iSize);
  free(p);
 return 0;
}