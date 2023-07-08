/*
2. Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.
Input : “Marvel lous Pyth on”
Output : “MarvellousPython” 
*/
#include<stdio.h>
void RemoveSpace(char *src, char *dest)
{
	while(*src!='\0')
	{
		if(*src==' ')
		{
			src++;
		}
		else
		{
			*dest=*src;
			src++;
			dest++;
		}
		
	}
	*dest='\0';
	
}   
int main()
{
 char arr[30] ={'\0'};
 char brr[30]={'\0'};

 printf("Enter String:");
 scanf("%[^'\n']s",arr);
 
 RemoveSpace(arr,brr);

 printf("%s",brr); // nohtyP suollevraM

 return 0;
} 