//program for array
//pratiksha chokhar
#include<stdio.h>
int main()
{
	int a = 3.5;
     printf("value of a is %d:\n", a);
	int arr[5]={1,2,3,4,5};
	for(int i=1;i<=4;i++)
	{
		printf("Enter the value for array \n",i);
		scanf("%d",&arr[i-1]);
		
		
	}
	printf("%d", arr[2]);
}
