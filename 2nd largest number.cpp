//program for to find 2nd largest no:
//pratiksha chokhar
#include<stdio.h>
int main()
{

int arr[50], size, i,first_large, second_large;
 
        printf("\n Enter the size of the array: ");
	scanf("%d", &size);
 
        printf("\n Enter %d elements of  the array: ", size);
 
        for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
 
   first_large = arr[0];
   for (i = 0; i<size; i++) 
        {
       if(first_large<arr[i])
       
       	first_large=arr[i];
       }
       	printf("largest is %d",first_large);
       	
     second_large=arr[0];  	
for(i=0;i<size;i++)
{
	if(second_large<arr[i] && arr[i]<first_large)
	
	second_large=arr[i];
	
}
printf("second largest is :%d",second_large );
}
        
