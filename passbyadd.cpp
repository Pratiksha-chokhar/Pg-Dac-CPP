//program for pass by address
//pratiksha chokhar
#include<stdio.h>
void swap(int *p, int *q);
int main()
{
	int a=10, b=20;
	printf("Before swap");
	printf("%d %d", a, b);
	printf("After swap");
	swap(&a,&b);
	printf("%d %d",a,b);
}
void swap(int*p, int*q)
{
	int temp;
	temp=*p;
	*p = *q;
	*q=temp;
}
