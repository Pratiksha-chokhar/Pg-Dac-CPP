//program for sum of 5 digit no
//pratiksha chokhar
#include<stdio.h>
int main ()
{
	int remainder, sum=0, num;
	printf("Enter the 4 digit  number :");
	scanf("%d", &num);
	while(num!=0)
	{
	remainder = num%10;
	sum=sum+remainder;
	num= num/10;
	

}
printf("sum  is:%d\n", sum);


	return 0;
}
