/*
4. Accept one character from user and convert case of that character.  
Input : a   Output : A  
Input : D   Output : d 
*/ 
#include<stdio.h>
#include<ctype.h>
void DisplayConvert ( char cValue)  
{  
	int iValue=cValue;
	
	/*if((iValue>=65)&&(iValue<=90))
	{   
		printf("%c",tolower(cValue));
	}
	else if((iValue>=97)&&(iValue<=122))
	{   
		printf("%c",toupper(cValue));
	}
		
	else   
	{    
		return;  
	}*/
	
	if(iValue<=90)
	{   
		printf("%c",tolower(cValue));
	}
	else if(iValue>90)
	{   
		printf("%c",toupper(cValue));
	}
		
	else   
	{    
		return;  
	}
	
 } 
int main() 
{  
	char cValue = '\0';   
	printf("Enter character\n"); 
	scanf("%c",&cValue); 
	DisplayConvert(cValue); 
 return 0; 
} 