/*
4. Write a program which display smallest digits of all element from singly
linear linked list.
Function Prototype :
void DisplaySmall( PNODE Head);
Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1 */

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

void SmallestDigit(PNODE Head)
{
	int iDigit=0,iNo=0,Smallest=0;
	printf("\n");
	
	while(Head!=NULL)
	{
		iNo=Head->Data;
		Smallest=9;
		while(iNo!=0)
		{	
			iDigit=iNo%10;
			if(iDigit<Smallest)
			{
				Smallest=iDigit;
			}
			iNo=iNo/10;
		}
		printf(" %d \t",Smallest);
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
 
 SmallestDigit(First);
 return 0;
} 