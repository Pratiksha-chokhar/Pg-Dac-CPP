//program for structure
//pratiksha chokhar
#include<stdio.h>
struct student
{
	char roll_no;
	int marks;
	float per;
	
};
int main()
{
/
struct student s;
s.roll_no=10;
s.marks = 30;
s.per=50.5;
printf("size of struct %d", sizeof(s));
}
