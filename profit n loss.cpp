//program for cost price and selling price
//pratiksha chokhar
#include<stdio.h>
int main()
{

int a, b, amount;
printf("enter an costprice:");
scanf("%d", &a);
printf("enter an sellingprice:");
scanf("%d", &b);
if(a<b)
{
	amount=b-a;
	printf("profit is:%d\n", amount);
}
else
{
	amount=a-b;
	printf("loss is %d\n", amount);
}
}

