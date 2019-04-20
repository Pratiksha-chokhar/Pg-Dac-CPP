//program for Hierarchical inheritance
//pratiksha chokhar
#include<iostream>
using namespace std;
class Num
{
	protected:
		int a,b;
		public:Num(int i,int j)
		{
			a=i;
			b=j;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
class Addnum:public Num
{
	int c;
	public:Addnum(int i,int j):Num(i,j)
	{
		c=a+b;
	}
	void show()
	{
		Num::show();
		cout<<"sum="<<c<<endl;
	}
};
class diffnum:public Num
{
	int d;
	public:
		diffnum(int x,int y):Num(x,y)
		{
			d=a-b;
		}
		void show()
		{
			Num::show();
			cout<<"Difference="<<d<<endl;
		}
};
int main()
{
	Addnum addobj(10,20);
	diffnum diffobj(30,70);
	addobj.show();
	diffobj.show();
}
