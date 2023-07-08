#include<stdio.h>
int Sum(int iNo1,int iNo2)
{
	iNo1+=iNo2;
	return iNo1;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	printf("enter 2 no");
	scanf("%d %d",&iValue1,&iValue2);
	//iRet=Sum(iValue1,iValue2);
	printf("Addition is%d",(iValue1+=iValue2));
	return 0;
}