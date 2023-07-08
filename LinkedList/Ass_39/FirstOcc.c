/*
1. Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3 
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

int SearchFirstOcc(PNODE Head, int No)
{
	int iPos=0;
	
	if(Head==NULL)
	{
		return -1;
	}
	while(Head!=NULL)
	{
		iPos++;
		if(Head->Data==No)
		{
			break;
		}
		Head=Head->Next;
	}
	return iPos;
	if(Head!=NULL)
	{
		return iPos;
	}
	else
	{
		return -1;
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
 InsertFirst(&First, 21);
 InsertFirst(&First, 11);
 InsertFirst(&First, 11);
 InsertFirst(&First, 11);
 Display(First);
 
 printf("\nEnter no to be search");
 scanf("%d",&iVal1);
 iRet=SearchFirstOcc(First,iVal1);
 if(iRet>0)
 {
	printf("\nno occured first at index %d",iRet);
 }
 else
 {
	 printf("\nno is not in list");
 }

 // Call all functions for below problem statements.
 return 0;
} 