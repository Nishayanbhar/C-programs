/*
5.Write a program which accept string from user and print below pattern.
Input : “Marvellous”
Output : 
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 
Input : “PPA”
Output : 
 p
 p p
 p p a 


*/
#include<stdio.h>
void PrintPattern(char* Str)
{
	int i=0,j=0,Size=0;
	
	while(Str[i]!='\0')
	{
		if((Str[i]>='A')&&(Str[i]<='Z'))
		{
			Str[i]=Str[i]+32;
		}
		Size++;
		i++;
	}
	if((Size%2)==0)//Even Size(Rectangle)
	{
		for(i=0;i<Size;i++)
		{
			for(j=0;j<Size;j++)
			{
				printf("%c\t",Str[j]);
			}
		printf("\n");
		}
	}
	else			//Odd Size(Triangle)
	{
		for(i=0;i<Size;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%c\t",Str[j]);
			}
		printf("\n");
		}
	}
}
int main()
{
	char arr[30]={'\0'};
	
	printf("\nEnter string: ");
	scanf("%[^'\n']s",arr);
	
	PrintPattern(arr);
	
	return 0;
}