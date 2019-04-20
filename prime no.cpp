//program for prime no:
//pratiksha chokhar
#include<stdio.h>
int main()
{

int num;
printf("Enter the no:");
scanf("%d", &num);
for(int i=1;i<num;i++)
{
	if(i/i && i/1)
	{
		printf("it is prime no :", num);
	}
	else
	{
		printf("it is not a prime no:", num);
	}
}
}
