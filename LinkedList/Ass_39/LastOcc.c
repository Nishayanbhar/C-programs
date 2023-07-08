/*
2. Write a program which search last occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :int SearchLastOcc( PNODE Head, int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 6 
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

int SearchLastOcc(PNODE Head, int No)
{
	int LastOcc=0,iPos=0;
	
	if(Head==NULL)
	{
		return -1;
	}
	while(Head!=NULL)
	{
		iPos++;
		if(Head->Data==No)
		{
			LastOcc=iPos;
		}
		Head=Head->Next;
	}
	return LastOcc;
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
 
 printf("\nEnter no to be search");
 scanf("%d",&iVal1);
 iRet=SearchLastOcc(First,iVal1);
 if(iRet>0)
 {
	printf("\nno occured last  at index %d",iRet);
 }
 else
 {
	 printf("\nno is not in list");
 }

 // Call all functions for below problem statements.
 return 0;
} 