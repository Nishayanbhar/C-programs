/*
1. Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28 
*/

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

void PrintPerfect(PNODE Head)
{
	int Sum=0,i=0,No=0;
	printf("\n");
	
	if(Head==NULL)
	{
		return;
	}
	while(Head!=NULL)
	{
		No=Head->Data;
		//printf("\t%d",No);
		Sum=0;
		i=0;
		for(i=1;i<=No/2;i++)
		{
			if(No%i==0)
			{
				Sum=Sum+i;
			}
		}
		if(Sum==No)
		{
			printf("%d\t",No);
		}
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
 InsertFirst(&First, 1);
 InsertFirst(&First, 13);
 InsertFirst(&First, 6);
 InsertFirst(&First, 10);
 InsertFirst(&First, 28);
 Display(First);
 
 PrintPerfect(First);
 // Call all functions for below problem statements.
 return 0;
} 