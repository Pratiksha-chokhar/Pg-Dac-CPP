//program for union
//pratiksha chokhar
#include<iostream>
using namespace std;
union student
{
	int roll;
	char name;
	
};
int main()
{
union student s;
	cout<<sizeof(s);
	//s.roll=10;
union student s={.roll=10};
}
