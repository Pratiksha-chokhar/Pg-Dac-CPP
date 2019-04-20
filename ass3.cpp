#include<stdio.h>
int main()
{
	int remainder, quotient, reverse=0, num;
	printf("Enter the 2 digit  number :");
	scanf("%d", &num);
	quotient= num/10;
	remainder = num%10;
//	p=quotient%10;
//	q=quotient/10;
	reverse= (remainder*10)+quotient;
	printf("reverse is:%d", reverse);
//	total_reverse=(reverse *10) + q;
//	printf("reverse no is %d :", total_reverse);
}
