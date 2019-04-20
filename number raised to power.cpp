//program for number raised to power of number.
//pratiksha chokhar
 #include<stdio.h>
 int main()
{
	int x, y,p=1;
	printf("Enter the value of x:\n");
	scanf("%d", &x);
	printf("enter the value of y:\n");
	scanf("%d",&y);
	for(int i=1;i<=y;i++)
	{
		p=p*x;
	
	}
		printf("%d",p);
 } 
