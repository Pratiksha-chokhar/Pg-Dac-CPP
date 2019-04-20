//program for constant variable
//pratiksha chokhar
#include<iostream>
using namespace std;
int main()
{
	const int *p;//p is pointer to an integer constant
	int a=10;
	p=&a;
	cout<<a<<endl;//10
	cout<<*p<<endl;//10
	//*p=20;we //do not change the value of constant
	cout<<a;
	cout<<*p;
	cout<<++a;
	int b=30;//30
	p=&b;
	cout<<b<<endl;//30
}
