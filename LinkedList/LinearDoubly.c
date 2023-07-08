#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* prev;
	struct node* next;
	
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;	

int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->next;
	}
	return iCnt;
}

void InsertFirst(PPNODE Head,int value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=value;
	newn->prev=NULL;
	newn->next=NULL;
	
	if(*Head ==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next= *Head;
		(*Head)->prev=newn;
		*Head= newn;
	}
}


void InsertLast(PPNODE Head, int value)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=value;
	newn->next=NULL;
	newn->next=NULL;
	
	if(*Head ==NULL)
	{
		*Head=newn;
	}
	else
	{
		temp=*Head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;
	}

}

void InsertAtPos(PPNODE Head, int value, int pos)
{
	int size=0,i=0;
	PNODE newn=NULL;
	PNODE temp=*Head;
	size=Count(*Head);
	
	if((pos<1)||(pos>(size+1)))
	{
		return;
	}
	else if(pos==1)
	{
		InsertFirst(Head,value);
	}
	else if(pos ==size+1)
	{
		InsertLast(Head,value);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=value;
		newn->prev=NULL;
		newn->next=NULL;
		
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		newn->prev=temp;
		
		temp->next=newn;
		(newn->next)->prev=newn;
	}
}


void DeleteFirst(PPNODE Head)
{

	if(*Head==NULL)
	{
		return;
	}
	else if((*Head)->next==NULL)
	{
		free((*Head));
		*Head=NULL;
	}
	else
	{
		(*Head)=(*Head)->next;
		free((*Head)->prev);
		(*Head)->prev=NULL;
	}
	
	
}

void DeleteLast(PPNODE Head)
{

	PNODE temp=*Head;
	if(*Head==NULL)
	{
		return;
	}
	else if((*Head)->next==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		while(((temp)->next)->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

void DeleteAtPos(PPNODE Head, int pos)
{
	int size=0,i=0;
	PNODE temp=*Head;
	PNODE DelNode=NULL;
	size=Count(*Head);
	
	if((pos<1)||(pos>size))
	{
		return;
	}
	else if(pos==1)
	{
		DeleteFirst(Head);
	}
	else if(pos==size)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
	
		temp->next=temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;
		
		
	}
}


void Display(PNODE Head)
{
	printf("\n");
	printf("NULL<=>");
	while(Head!=NULL)
	{
		printf("| %d |<=> ",Head->data);
		Head=Head->next;
	}
	printf("NULL");
}



int main()
{
	PNODE First= NULL;
	int no=0, iRet=0, iPos=0;
	
	printf("------------Insert at first------------\n\n");
	printf("Enter number:");
	scanf("%d",&no);
	InsertFirst(&First, no);
	
	printf("Enter number:");
	scanf("%d",&no);
	InsertFirst(&First, no);
	
	printf("Enter number:");
	scanf("%d",&no);
	InsertFirst(&First, no);
	
	Display(First);
	
	
	printf("\n\n-------------Count node--------------------\n");
	iRet=Count(First);
	printf("\nno of nodes in linked list are:%d\n",iRet);
	
	
	printf("\n\n---------------Insert at last--------------\n");
	printf("Enter number:");
	scanf("%d",&no);
	InsertLast(&First,no);
	
	
	printf("Enter number:");
	scanf("%d",&no);
	InsertLast(&First,no);
	
	printf("Enter number:");
	scanf("%d",&no);
	InsertLast(&First,no);
	
	Display(First);
	
	printf("\n\n---------------Insert at pos ------------------\n");
	printf("Enter number:");
	scanf("%d",&no);
	printf("Enter pos:");
	scanf("%d",&iPos);
	
	InsertAtPos(&First,no,iPos);
	Display(First);
	
	printf("\n\n---------------Delete Fist Node-------------\n");
	DeleteFirst(&First);
	Display(First);
	
	
	printf("\n\n---------------Delete Last Node----------------\n");
	DeleteLast(&First);
	Display(First);

		
	printf("\n\n---------------Delete at pos ------------------\n");
	printf("Enter pos:");
	scanf("%d",&iPos);
	DeleteAtPos(&First,iPos);
	Display(First);
	
	
	
	
	return 0;
}