/*
2. Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414 
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

void Palindrome(PNODE Head)
{
	int iDigit=0,iNo=0,iRev=0,Original=0;
	printf("\n");
	while(Head!=NULL)
	{
		iNo=Head->Data;
		Original=iNo;
		iRev=0;
		while(iNo!=0)
		{	
			iDigit=iNo%10;
			iRev=(iRev*10)+iDigit;
			iNo=iNo/10;
		}
		
		if(iRev==Original)
		{
			printf("%d\t",iRev);
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
 InsertFirst(&First, 51);
 InsertFirst(&First, 20);
 InsertFirst(&First, 11);
// InsertFirst(&First, 12);
// InsertFirst(&First, 11);
 Display(First);
 
 Palindrome(First);
 return 0;
} 