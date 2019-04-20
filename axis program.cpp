//program for to find out point on x-axis or y-axis
//pratiksha chokhar
#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter the X-axis\n");
	scanf("%d", &x);
	printf("Enter the y-axis\n");
	scanf("%d", &y);
	if(x>0 && y>0)
	{
		printf("This is first quadrant\n");
		
	}
	else if(x<0 && y>0)
	{
		printf("This is second Quadrant\n");
		
	}
	else if(x<0 && y<0)
	{
		printf("This is third quadrant\n");
		
	}
	else if(x<0 &&y>0)
	{
		printf("It is Fourth quadrant\n");
	}
	else {
		printf("It is origin\n ");
	}
}
