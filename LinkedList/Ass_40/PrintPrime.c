/*
2. Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89 
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

void PrintPrime(PNODE Head)
{
	int i=0,No=0,flag=0;
	printf("\n");
	
	if(Head==NULL)
	{
		return;
	}
	while(Head!=NULL)
	{
		No=Head->Data;
		i=0;
		flag=0;
		for(i=2;i<=No/2;i++)
		{
			if(No%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
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

 InsertFirst(&First, 11);
 InsertFirst(&First, 2);
 InsertFirst(&First, 13);
 InsertFirst(&First, 6);
 InsertFirst(&First, 17);
 InsertFirst(&First, 10);
 Display(First);
 
 PrintPrime(First);
 // Call all functions for below problem statements.
 return 0;
} 