/*
5. Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :
Piyush Khairnar : 7588945488 आ"ी Technical सं&ार करतो !!! ©Marvellous Infosystems Page 2
Marvellous Logic Building Assignment : 41
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9 */

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
	int Data;
	struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no )
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->Next = NULL;
	newn->Data = no;
 
	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> Next = *Head;			
		*Head = newn;
	}
}

void LargestDigit(PNODE Head)
{
	int iDigit=0,iNo=0,Largest=0;
	printf("\n");
	
	while(Head!=NULL)
	{
		iNo=Head->Data;
		Largest=0;
		while(iNo!=0)
		{	
			iDigit=iNo%10;
			if(iDigit>Largest)
			{
				Largest=iDigit;
			}
			iNo=iNo/10;
		}
		printf(" %d \t",Largest);
		Head=Head->Next;
	}
	
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("| %d |-->",Head->Data);
		Head=Head->Next;
	}
}

int main()
{
 PNODE First = NULL;
 int iVal1=0,iRet=0;

 InsertFirst(&First, 101);
 InsertFirst(&First, 51);
 InsertFirst(&First, 20);
 InsertFirst(&First, 57);
 InsertFirst(&First, 329);
 InsertFirst(&First, 11);
 Display(First);
 
 LargestDigit(First);
 return 0;
} 