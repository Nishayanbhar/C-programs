/*
3. Accept N numbers from user check whether that numbers contains 11 in it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent

*/

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength)
{
	int iCnt=0,flag=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{       
		if(Arr[iCnt]==11)
		{
			flag=1;
			break;
		}	
	}
	if(flag==1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
 int iSize = 0,bRet = 0,iCnt = 0;
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
 
 printf("Enter %d elements ",iSize);
 for(iCnt = 0;iCnt<iSize; iCnt++)
 {
	printf("Enter element %d:",iCnt+1);
	scanf("%d",&p[iCnt]);
 }
 
 bRet=Check(p, iSize);
 if(bRet==TRUE)
 {
	 printf("Array contains 11");
 }
 else
 {
	 printf("not contains 11");
 }
 
 free(p);
 return 0;
} 