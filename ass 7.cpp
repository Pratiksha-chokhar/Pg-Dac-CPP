//Program for leap year using if -else only
#include<stdio.h>
int main()
{
	int year;
	printf("enter the year\n");
	scanf("%d", &year);
	if((year%4)==0)
	{
		if((year%400)==0)
		{
			printf("Great this is Leap Year !!\n");
		}
	}
		else
		{
			printf("Sorry!This is not a Leap Year\n");
			
		}
	
}
