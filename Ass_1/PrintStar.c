/*
5. Accept one number from user and print that number of * on screen.  
*/

#include<stdio.h> 
void PrintStar(int iNo) 
{  
 int iCnt = 1;  
 for(iCnt=1; iCnt<=iNo;iCnt++)  
 {    
	printf("*\t"); 
 }  
}  
int main() 
{  
 int iValue = 0; 
 printf("Enter number");
 scanf("%d",&iValue);
 PrintStar(iValue);
 
 return 0; 
 }
       