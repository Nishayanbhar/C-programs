/*
2. Accept one number from user and print that number of * on screen. 
*/
#include<stdio.h> 
void Display(int);
 
int main() 
{                                               
 int iValue = 0; 
 
 printf("Enter number"); 
 scanf("%d",&iValue); 
 Display(iValue); 
 return 0; 
}
 
void Display(int iNo)  
{  
	int i=1;
	while(i<=iNo)  
	{   
		printf("*\t");    
		i++;   
	}
	
} 
