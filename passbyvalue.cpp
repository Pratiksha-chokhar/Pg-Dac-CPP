//program for pass by value 
//pratiksha chokhar
#include<stdio.h>
void swap(int p, int q);
int main()
{
	int a=10 ,b=20;

	printf("values before swap\n");
	printf("%d %d", a,b);
	printf("values after swap\n");
	swap(a,b);
	printf("%d %d", a,b);
}
	void swap(int p, int q)
	{
		int temp;
		temp=p;
		p=q;
		q=temp;
	
}
