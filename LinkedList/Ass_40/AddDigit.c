/*
5. Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10 

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

void AddDigit(PNODE Head)
{
	int DigitSum=0,Rem=0,No=0;
	printf("\n");
	
	if(Head==NULL)
	{
		return;
	}
	while(Head!=NULL)
	{
		No=Head->Data;
		DigitSum=0;
		
		while(No!=0)
		{
			No=No/10;
			DigitSum++;
		}
		printf("%d\t",DigitSum);
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
 
 AddDigit(First);
 // Call all functions for below problem statements.
 return 0;
} 