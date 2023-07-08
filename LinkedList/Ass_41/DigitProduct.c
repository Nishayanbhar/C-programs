/*
3. Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :
void DisplayProduct( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4
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

void DigitProduct(PNODE Head)
{
	int iDigit=0,iNo=0,iProduct=0;
	printf("\n");
	
	while(Head!=NULL)
	{
		iNo=Head->Data;
		iProduct=1;
		while(iNo!=0)
		{	
			iDigit=iNo%10;
			if(iDigit==0)
			{
				iDigit=1;
			}
			iProduct=iProduct*iDigit;
			iNo=iNo/10;
		}
		printf(" %d \t",iProduct);
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
 
 DigitProduct(First);
 return 0;
} 