//pointers program
//pratiksha chokhar
#include<stdio.h>
int main()
{
	char ch='A';
	int *p=&ch;
	printf("%c",ch);
	printf("%d",p);
	printf("%d", &p);
	printf("%d", &ch);
}
