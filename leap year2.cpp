//program for the leap year using Logical operator
//Pratiksha chokhar
#include<stdio.h>
int main()
{
	int year;
	printf("enter the year\n");
	scanf("%d", &year);
	if((year%4)==0 && ((year%400)==0))
	{
		printf("Great this is Leap Year !!\n");
		
	}
		else
		{
			printf("Sorry!This is not a Leap Year\n");
			
		}
	
}
