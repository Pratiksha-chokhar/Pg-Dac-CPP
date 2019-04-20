//program for to find youngest in a student
//pratiksha chokhar
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the age of ram, sham and ajay");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("ram is youngest\n");
		}
	}
		if(b>a)
		{
			if(b>c)
			{
				printf("sham is youngest\n");
			}
		}
		if(c>a)
		{
			if(c>b)
			{
			
			printf("ajay is youngest\n");
		    }
	    }
	
	
}
