//program for constant pointer to an integer
//pratiksha chokhar
#include<iostream>
using namespace std;
int main()
{
	int a=10; 
	int *const p=&a;
	cout<<a<<endl;
	cout<<*p<<endl;
	a++;
	cout<<a<<endl;
	cout<<a++<<endl;
	*p=20;
	cout<<a<<endl;
	cout<<*p<<endl;
	++a;
	cout<<a<<endl;
	cout<<++a<<endl;
	int b=40;
	//p=&b;// we cannot chanfe the address of the constant pointer as its value changes
	cout<<b;
	cout<<*p;
	
}
