//program for multilevel inheritance
//pratiksha chokhar
#include<iostream>
using namespace std;
class num
{
	protected:
		int a, b;
		public:
			void get()
			{
				cout<<"enter a and b";
				cin>>a>>b;
			}
			void show()
			{
				cout<<"a="<<a<<endl;
				cout<<"b="<<b<<endl;
			}
};
class Addnum:public num //derived class of base class num.
{
	protected:
		int c;
		public:
			void set()
			{
				get();  //function of base class
			}
			void display()
			{
				show();   //function of base class
				cout<<"sum="<<c;
			}
			void add()
			{
				c=a+b;
			}
};
class Diffnum:public Addnum  //subclass of addnum
{
	int d;
	public:
		void accept()
		{
			set();// function of addnum
		}
		void diff()
		{
			d=a-b;
		}
		void print()
		{
			display(); //function of addnum
			cout<<"diff="<<d;
		}
};
int main()
{
	Diffnum obj;
	obj.accept();
	obj.add();
	obj.diff();
	obj.print();
}
