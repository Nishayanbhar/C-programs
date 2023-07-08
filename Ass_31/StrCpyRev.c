/*
1. Write a program which accept string from user and copy that characters of that string into another string in reverse order.
Input  : “Marvellous Python”
Output : “nohtyP suollevraM”
*/
#include<stdio.h>
void StrCpyRev(char *src, char *dest)
{
	int i=0,j=0,last=0;
	while(src[i]!='\0')
	{
		i++;
	}
	last=i-1;
	for(i=last,j=0;i>=0;j++,i--)
	{
		dest[j]=src[i];
	}
	dest[j]='\0';
	
}   
int main()
{
 char arr[30] ={'\0'};
 char brr[30]={'\0'};

 printf("Enter String:");
 scanf("%[^'\n']s",arr);
 
 StrCpyRev(arr,brr);

 printf("%s",brr); // nohtyP suollevraM

 return 0;
} 