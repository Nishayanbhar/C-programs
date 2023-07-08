/*
5. Write a program which accept string from user and copy that characters of that string into another string by toggling the case.
Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2” 

*/
#include<stdio.h>
void StrCpy(char *src, char *dest)
{
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{
			*src=*src+32;
			*dest=*src;
		}
		else if((*src>='a')&&(*src<='z'))
		{
			*src=*src-32;
			*dest=*src;
		}
		else
		{
			*dest=*src;
		}
		src++;
		dest++;
	}
	*dest='\0';
	
}   
int main()
{
 char arr[30] ={'\0'};
 char brr[30]={'\0'};

 printf("Enter String:");
 scanf("%[^'\n']s",arr);
 
 StrCpy(arr,brr);

 printf("%s",brr); // nohtyP suollevraM

 return 0;
} 