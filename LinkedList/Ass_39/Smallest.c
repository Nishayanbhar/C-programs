/*
5. Write a program which return smallest element from singly linear linked
list.
Function Prototype :int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
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

int SearchSmallest(PNODE Head)
{
	int Smallest=0;
	
	if(Head==NULL)
	{
		return -1;

	}
	
	if(Head!=NULL)
	{
		Smallest=Head->Data;
	}
	
	while(Head!=NULL)
	{
		if((Head->Data)<Smallest)
		{
			Smallest=Head->Data;
		}
		Head=Head->Next;
	}
	
	return Smallest;
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
 InsertFirst(&First, 110);
 InsertFirst(&First, 200);
 InsertFirst(&First, 11);
 Display(First);
 
 iRet=SearchSmallest(First);
 printf("\nSmallest element is:%d",iRet);
 // Call all functions for below problem statements.
 return 0;
} 