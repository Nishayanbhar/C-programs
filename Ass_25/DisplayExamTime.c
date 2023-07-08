/*
5. Accept division of student from user and depends on the division display exam timing. 
There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)

Input : C
Output : Your exam at 9.20 AM

Input : d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>
void ChkDigit(char ch)
{
	switch(ch)
	{
		case 'A':
		{
			printf("Your Exam at 7 AM");
			break;
		}
		case 'a':
		{
			printf("Your Exam at 7 AM");
			break;
		}
		case 'B':
		{
			printf("Your Exam at 8.30 AM");
			break;
		}
		case 'b':
		{
			printf("Your Exam at 8.30 AM");
			break;
		}
		case 'C':
		{
			printf("Your Exam at 9.20 AM");
			break;
		}
		case 'c':
		{
			printf("Your Exam at 9.20 AM");
			break;
		}		
		case 'D':
		{
			printf("Your Exam at 10.30 AM");
			break;
		}
		case 'd':
		{
			printf("Your Exam at 10.30 AM");
			break;
		}
		default:
		{
			printf("Invalid Input");
		}
	}
}
int main()
{
 char cValue = '\0'; 
 printf("Enter character:");
 scanf("%c",&cValue);
 
 ChkDigit(cValue);
 return 0;
} 