//program to print multiplication table of the number
//pratiksha chokhar
#include<stdio.h>
int main()
{
	int n,i,r;
	printf("Enter the no:");
	scanf("%d", &n);
	for(i=1;i<=10;i++)
	{
      r=n*i;
		printf("%d*%d=%d\n",n,i,r);
	}
}
