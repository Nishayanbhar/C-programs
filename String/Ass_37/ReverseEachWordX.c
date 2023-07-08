/*
3. Write a program which accept string from user and reverse each word in place.
Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO” 
*/
#include<stdio.h>
void ReverseWord(char *Str)
{
	int iCnt=0;
	 int i=0,Start=0,End=0;
	 char temp='\0';
	for(i=0;Str[i]!='\0';i++)
	{
		iCnt=0;
		if(i>0) 	
		{
			i--;
		}
		
		printf("\n in main i= %d",i);
		
		if(Str[i]==' ')
		{
			printf("\n In If");
			while((Str[i]==' ')&&(Str[i]!='\0'))
			{
				printf("\t i=%d",i);
				i++;	
			}
			printf("\t i=%d",i);
		}
		else
		{
			printf("\nInElse");
			while((Str[i]!=' ')&&((Str[i+1]== ' ')||(Str[i]!= '\0')))
			{
				printf("\t i=%d",i);
				iCnt++;
				i++;
			}
			printf("\t i=%d",i);
			
			temp='\0';
			End=i,Start=i-iCnt;
			for(Start=i-iCnt;Start<=End;Start++,End--)
			{
				printf("\n In REV logic");
				temp=Str[Start];
				Str[Start]=Str[End];
				Str[End]=temp;
			}
			
		}
	}
	
	
}
int main()
{
	char arr[30]={'\0'};

	printf("\nEnter String: ");
	scanf("%[^'\n']s",arr);
	
	ReverseWord(arr);
	printf("\n%s",arr);
	
	return 0;
}