//program for sum of vaiables
//pratiksha chokhar
#include<iostream>
using namespace std;
int sum(int a, int b);

void get()
{
	cout<<"Enter num1,num2";
	cin>>n1>>n2;
}
int sum(int p, int q)
{
	return (p+q);
}
int main()
{
	int n1,n2;
	get();
	int result=sum(n1, n2);
	cout<<"sum is"<<result;
	return 0;
}
