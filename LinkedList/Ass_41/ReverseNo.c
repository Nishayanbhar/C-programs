/*
3. Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52 
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

void Reverse(PNODE Head)
{
	int iDigit=0,iNo=0,iRev=0;
	printf("\n");
	while(Head!=NULL)
	{
		iNo=Head->Data;
		iRev=0;
		while(iNo!=0)
		{	
			iDigit=iNo%10;
			iRev=(iRev*10)+iDigit;
			iNo=iNo/10;
		}
		Head->Data=iRev;
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
 InsertFirst(&First, 11);
// InsertFirst(&First, 12);
// InsertFirst(&First, 11);
 Display(First);
 
 Reverse(First);
 Display(First);
 return 0;
} 