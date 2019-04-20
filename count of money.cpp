
//assignment for count of money
#include<stdio.h>
int main()
{
	int a,b,c,d,total_money,e,total_count;
	a=(0.25*2)+0.5;
	b=1;
	c=2;
	d=3;
	e=5;
	total_money= a + (b*2)+(c*2)+(d*3)+(e*3);
	printf("Total money is %d", total_money);
	total_count= (a+b+c+d+e);
	printf("count is %d",total_count);
	return 0;
	
}
