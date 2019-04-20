//program for copy constructor
//pratiksha chokhar
#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
		
void show()
{
	cout<<"l,b,h"<<endl;
	cout<<l<<b<<h<<endl;
}

box(int p,int q,int r)
{
	l=p;
	b=q;
	h=r;
}
~box()
{
	cout<<"In destructor"<<endl;
}
};

int main()
{
	box b2(10,20,30);
	
	b2.show();

}

