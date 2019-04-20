//program for absolute no
//pratiksha chokhar
#include<stdio.h>
int main()
{
	int a, num;
	printf("Enter the no:");
	scanf("%d", &a);
	if(a<0)
	{
		num=a*(-1);
		printf("num is %d", num);
	}
	else
	{
		printf("num is absolute!");
	}
}
