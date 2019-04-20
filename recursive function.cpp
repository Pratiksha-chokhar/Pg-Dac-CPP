//program for recursive function
//pratiksha chokhar
#include<iostream>
using namespace std;
void rec(int);
int main()
{
rec(1);
return 0;	
}
void rec(int n)
{
	cout<<"winding phase"<<n<<endl;
	if(n<3)
	{
		rec(n+1);
	}
	cout<<"unwinding phase"<<n<<endl;
}
