#include<stdio.h>
int main()
{
	int a=10;
	int* p=&a;
	int** q=&p;
	
	printf("\n a= %d",a);
	printf("\n &a= %d",&a);
	
	printf("\n\n p= %d",p);
	printf("\n &p= %d",&p);
	printf("\n *p= %d",*p);
	
	printf("\n\n q= %d",q);
	printf("\n &q= %d",&q);
	printf("\n *q= %d",*q);
	printf("\n **q= %d",**q);
	printf("\n q= %d",q);
	
	return 0;
}