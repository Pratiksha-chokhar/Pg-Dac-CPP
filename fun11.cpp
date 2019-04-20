//program for function
//pratiksha chokhar
#include<iostream>
using namespace std;
int  sum();
int main()
{
	int result=0;
result=sum();
	cout<<"result is"<<result;
	return 0;
}
int sum()
{
	int num1, num2;
	cout<<"Enter num1 and num2"<<endl;
	cin>>num1>>num2;
	int pqr=num1+num2;
	return pqr;
}
