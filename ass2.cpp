#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the 3 nos :\n");
	scanf("%d%d%d ", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("A is Greater");
		}
		else if(b>a)
		{
			if(b>c)
			
				printf("B is greater");
			}
		
		else
	    {
			printf("C is greater");
		}
	
	return 0;
}
