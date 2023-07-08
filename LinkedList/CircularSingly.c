#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node* Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


int Count(PNODE Head,PNODE Tail)
{
	int iCnt=0;
	if((Head==NULL)&&(Tail==NULL))
	{
		return 0;
	}
	else
	{
		while(Head!=Tail)
		{
			iCnt++;
			Head=Head->Next;
		}
		iCnt+=1;
	}
	return iCnt;
}



void InsertFirst(PPNODE Head,PPNODE Tail,int iNo)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=iNo;
	newn->Next=NULL;
	
	if(((*Head)==NULL)&&((*Tail)==NULL))
	{
		(*Head)=newn;
		(*Tail)=newn;
	}
	else
	{
		newn->Next=(*Head);
		(*Head)=newn;
		
	}
	(*Tail)->Next=(*Head);

}


void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=iNo;
	newn->Next=NULL;
	
	if(((*Head)==NULL)&&((*Tail)==NULL))
	{
		(*Head)=newn;
		(*Tail)=newn;
	}
	else
	{
		(*Tail)->Next=newn;
		(*Tail)=newn;
	}
	(*Tail)->Next=(*Head);

}

void InsertAtPos(PPNODE Head,PPNODE Tail,int iNo, int iPos)
{
	int Size=0;
	Size=Count(*Head,*Tail);
	int i=0;
	
	PNODE newn=NULL;
	PNODE Temp=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=iNo;
	newn->Next=NULL;
	
	if((iPos<1)||(iPos>(Size+1)))
	{
		return;
	}
	else if(iPos==1)
	{
		InsertFirst(Head,Tail,iNo);
	}
	else if(iPos==(Size+1))
	{
		InsertLast(Head,Tail,iNo);
	}
	else
	{
		
		Temp=(*Head);
		for(i=1;i<iPos-1;i++)
		{
			Temp=Temp->Next;
		}
		newn->Next=Temp->Next;
		Temp->Next=newn;
		
	}

}



void DeleteFirst(PPNODE Head, PPNODE Tail)
{
	PNODE Temp=NULL;
	if(((*Head)==NULL)&&((*Tail)==NULL))
	{
		return;
	}
	else if((*Head)==(*Tail))
	{
		free((*Head));
		(*Head)=NULL;
		(*Tail)=NULL;
	}
	else
	{
		(*Head)=(*Head)->Next;
		free((*Tail)->Next);
		(*Tail)->Next=(*Head);
		
		
	}
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE Temp=NULL;
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
	
		Temp=(*Head);
		while(Temp->Next!=(*Tail))
		{
			Temp=Temp->Next;
		}
		free(Temp->Next);
		Temp->Next=(*Head);
		(*Tail)=Temp;
		
	}
}


void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
	int Size=0;
	Size=Count(*Head,*Tail);
	int i=0;

	PNODE Temp=NULL;
	PNODE DelNode=NULL;
	
	if((iPos<1)||(iPos>(Size)))
	{
		return;
	}
	else if(iPos==1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(iPos==(Size))
	{
		DeleteLast(Head,Tail);
	}
	else
	{
		
		Temp=(*Head);
		for(i=1;i<iPos-1;i++)
		{
			Temp=Temp->Next;
		}
		DelNode=Temp->Next;
		Temp->Next=DelNode->Next;
		free(DelNode);
		
	}

}



void Display(PNODE Head,PNODE Tail)
{
	printf("\n");
	if((Head==NULL)&&(Tail==NULL))
	{
		return;
	}
	else
	{
		while(Head!=Tail)
		{
			printf("|%d|->",Head->Data);
			Head=Head->Next;
		}
		printf("|%d|->",Head->Data);
	}
}

int main()
{
	PNODE First=NULL;
	PNODE Last=NULL;
	int iCh=0,iNum=0,iContinue=0,iRet=0,iPos=0;
	
 do
 {
	printf("\n 1. Insert First");
	printf("\n 2. Insert Last");
	printf("\n 3. Insert at Pos");
	printf("\n 4. Delete First");
	printf("\n 5. Delete Last");
	printf("\n 6. Delete At Pos");
	printf("\n 7. Count elements");
	printf("\n 8. Display");
	
	printf("\nEnter Choice:");
	scanf("%d",&iCh);
	
	switch(iCh)
	{
		case 1:  	
		{
			printf("Enter Number:");
			scanf("%d",&iNum);
			InsertFirst(&First,&Last,iNum);
			Display(First,Last);
			break;
		}
		case 2:
		{
			printf("Enter Number:");
			scanf("%d",&iNum);
			InsertLast(&First,&Last,iNum);
			Display(First,Last);
			break;
		}
		case 3:
		{
			printf("Enter Number:");
			scanf("%d",&iNum);
			
			printf("Enter Pos:");
			scanf("%d",&iPos);
			
			InsertAtPos(&First,&Last,iNum,iPos);
			Display(First,Last);
			
			break;
		}
		case 4:
		{
			DeleteFirst(&First,&Last);
			Display(First,Last);
			break;
		}
		case 5:
		{
			DeleteLast(&First,&Last);
			Display(First,Last);
			break;
		}
		case 6:
		{
			printf("Enter Pos:");
			scanf("%d",&iPos);
			
			DeleteAtPos(&First,&Last,iPos);
			Display(First,Last);
			
			break;
		}
		case 7:
		{
			iRet=Count(First,Last);
			printf("\nCount is:%d",iRet);
			break;
		}
		case 8:
		{
			Display(First,Last);
			break;
		}
		default:
		{
			printf("Invalid choice");
		}
	}
	
	printf("\ndo you want to continue? press 1");
	scanf("%d",&iContinue);
 }while(iContinue==1);
	
	return 0;
}