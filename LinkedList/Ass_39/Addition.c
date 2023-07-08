/*
3. Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100 
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

int Addition(PNODE Head)
{
	int Add=0;
	
	while(Head!=NULL)
	{
		Add=Add+Head->Data;
		Head=Head->Next;
	}
	
	return Add;
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
 InsertFirst(&First, 21);
 InsertFirst(&First, 11);
 InsertFirst(&First, 11);
 InsertFirst(&First, 11);
 Display(First);
 
 iRet=Addition(First);
 printf("\nAddition is:%d",iRet);
 // Call all functions for below problem statements.
 return 0;
} 