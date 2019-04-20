//program for dynamic memory allocation.
//pratiksha chokhar
#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter array size";
	cin>>size;
	int *p=new int[size];
	if(p==0)
	{
		cout<<"Insufficient memory";
		exit(1);
	}
	for(int i=0;i<size;i++)
	{
		cout<<"enter value of an array"<<endl;
		cin>>p[i];
	}
	cout<<"printing array element:";
	for(int j=0;j<size;j++)
	{
		cout<<p[j];
	}
	delete []p;
	return 0;
}
