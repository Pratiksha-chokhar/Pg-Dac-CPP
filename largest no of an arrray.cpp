//program for largest no
//pratiksha chokhar
#include<stdio.h>
int main ()
{

	int arr[3]={9,6,4};
	
		int largest = arr[0];
		for(int i=0;i<=2;i++)
		{
		if(largest<arr[i])	
		{
			largest = arr[i];
		}
		}
printf("\n largest no is:%d",largest);
return 0;
}
