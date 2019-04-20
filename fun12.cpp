//program for function
//pratiksha chokhar
#include<iostream>
using namespace std;
int sum();
int main()
{
	int result;
	result=sum();
	cout<<"sum is :"<<result;
	return 0;
}
int sum()
{
	int num1, num2;
	cout<<"Enter num1 and num2"<<endl;
	cin>>num1>>num2;
	int sum=num1+num2;
	return sum;
}
