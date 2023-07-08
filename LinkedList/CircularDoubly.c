#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node* Next;
	struct node* Prev;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int Count(PNODE Head,PNODE Tail)
{
	int iCnt=0;
	if((Head==NULL)&&(Tail==NULL))
	{
		return iCnt;
	}
	else
	{
		while((Head->Next)->Prev!=Tail)
		{
			iCnt++;
			Head=Head->Next;
		}
		iCnt+=1;
	}
	return iCnt;
}

void InsertFirst(PPNODE Head,PPNODE Tail, int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=no;
	newn->Prev=NULL;
	newn->Next=NULL;
	
	if(((*Head)== NULL)&&((*Tail)==NULL))
	{
		(*Head)=newn;
		(*Tail)=newn;
	}
	else
	{
		newn->Next=(*Head);
		(*Head)->Prev=newn;
		(*Head)=(*Head)->Prev;
	}
	(*Head)->Prev=(*Tail);
	(*Tail)->Next=(*Head);
}


void InsertLast(PPNODE Head,PPNODE Tail, int No)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=No;
	newn->Prev=NULL;
	newn->Next=NULL;
	
	
	if(((*Head)== NULL)&&((*Tail)==NULL))
	{
		(*Head)=newn;
		(*Tail)=newn;
	}
	else
	{
		(*Tail)->Next=newn;
		newn->Prev=(*Tail);
		(*Tail)=newn;
	}
	(*Head)->Prev=(*Tail);
	(*Tail)->Next=(*Head);
}


void InsertAtPos(PPNODE Head,PPNODE Tail, int No,int Pos)
{
	int Size=0,i=0;
	Size=Count(*Head,*Tail);
	
	PNODE Temp=NULL;
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=No;
	newn->Prev=NULL;
	newn->Next=NULL;
	
	
	if((Pos<1)||(Pos>(Size+1)))
	{
		return;
	}
	if(Pos==1)
	{
		InsertFirst(Head,Tail,No);
	}
	if(Pos==(Size+1))
	{
		InsertLast(Head,Tail,No);
	}
	
	else
	{
		Temp=*Head;
		for(i=1;i<Pos-1;i++)
		{
			Temp=Temp->Next;
		}
		newn->Prev=Temp;
		newn->Next=Temp->Next;
		Temp->Next=newn;
		newn->Next->Prev=newn;
				
		
	}
	
}




void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	
	if(((*Head)==NULL)&&((*Tail)==NULL))
	{
		return;
	}
	else if((*Head)==(*Tail))
	{
		free((*Head));
		*Head=NULL;
		*Tail=NULL;
		
	}
	else
	{
		(*Head)=(*Head)->Next;
		free((*Head)->Prev);
		
		(*Head)->Prev=(*Tail);
		(*Tail)->Next=(*Head);
		
	}
}


void DeleteLast(PPNODE Head,PPNODE Tail)
{
	
	if(((*Head)==NULL)&&((*Tail)==NULL))
	{
		return;
	}
	else if((*Head)==(*Tail))
	{
		free((*Tail));
		(*Head)=NULL;
		(*Tail)=NULL;
		
	}
	else
	{
		(*Tail)=(*Tail)->Prev;
		free((*Tail)->Next);
		
		(*Tail)->Next=(*Head);
		(*Head)->Prev=(*Tail);
		
		
	}
}


void DeleteAtPos(PPNODE Head,PPNODE Tail,int Pos)
{
	int Size=0,i=0;
	Size=Count(*Head,*Tail);
	
	PNODE Temp=NULL;
	
	
	if((Pos<1)||(Pos>(Size)))
	{
		return;
	}
	if(Pos==1)
	{
		DeleteFirst(Head,Tail);
	}
	if(Pos==(Size))
	{
		DeleteLast(Head,Tail);
	}
	
	else
	{
		Temp=*Head;
		for(i=1;i<Pos-1;i++)
		{
			Temp=Temp->Next;
		}
		
		Temp->Next=(Temp->Next)->Next;
		free(Temp->Next->Prev);
		(Temp->Next)->Prev=Temp;
		
		
	}
	
}


void Display(PNODE Head, PNODE Tail)
{
	printf("\n");
	if((Head==NULL)&&(Tail==NULL))
	{
		return;
	}
	else if(Head==Tail)
	{
		printf("| %d ",Head->Data);
	}
	else
	{
	
		while((Head->Next)->Prev!=Tail)
		{
			printf("|%d|<=>",Head->Data);
			Head=Head->Next;
		}
		printf("|%d|",Head->Data);

	}
}
int main()
{
	int iNum=0,iPos=0,iRet=0;
	PNODE First=NULL;
	PNODE Last=NULL;
	
	
	printf("\n--------Insert at fisrt-------------");
	printf("\nEnter iNumber:");
	scanf("%d",&iNum);
	InsertFirst(&First,&Last,iNum);
	
	printf("\nEnter iNumber:");
	scanf("%d",&iNum);
	InsertFirst(&First,&Last,iNum);
	
	printf("\nEnter iNumber:");
	scanf("%d",&iNum);
	InsertFirst(&First,&Last,iNum);
	
	Display(First,Last);
	
	
	printf("\n--------Insert at Last-------------");
	printf("\nEnter iNumber:");
	scanf("%d",&iNum);
	InsertLast(&First,&Last,iNum);
	
	printf("\nEnter Number:");
	scanf("%d",&iNum);
	InsertLast(&First,&Last,iNum);
	
	printf("\nEnter Number:");
	scanf("%d",&iNum);
	InsertLast(&First,&Last,iNum);
	
	Display(First,Last);
	
	
	printf("\n--------Insert at Pos--------------");
	printf("\nEnter Number:");
	scanf("%d",&iNum);
	printf("\nEnter pos:");
	scanf("%d",&iPos);
	
	InsertAtPos(&First,&Last,iNum,iPos);
	
	Display(First,Last);
	
	printf("\n\n--------Delete First-------------");
	DeleteFirst(&First,&Last);
	Display(First,Last);
	
	printf("\n\n--------Delete Last-------------");
	DeleteLast(&First,&Last);
	Display(First,Last);
	
	
	printf("\n\n--------Delete at Pos-------------");
	
	printf("\nEnter pos:");
	scanf("%d",&iPos);
	
	DeleteAtPos(&First,&Last,iPos);
	Display(First,Last);
	
	printf("\n\n--------Count Nodes-------------");
	iRet=Count(First,Last);
	printf("\nCount:%d",iRet);
	return 0;
}