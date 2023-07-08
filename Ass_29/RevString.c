/*
5. Write a program which accept string from user reverse that string in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba” 
*/

#include<stdio.h>

void Reverse(char *str)
{
	int i=0,iEnd=0,iStart=0;
	char temp='\0';
	while(str[i]!='\0')
	{
		i++;
	}
	for(iStart=0,iEnd=i-1;iStart<iEnd;iStart++,iEnd--)
	{
		temp=str[iStart];
		str[iStart]=str[iEnd];
		str[iEnd]=temp;
	
	}
	printf("%s",str);
	
	
	
}
int main()
{
 char arr[20];
 
 printf("Enter string");
 scanf("%[^'\n']s",arr);
 
 Reverse(arr);
 
 return 0;
} 