//program for Inheritance
//pratiksah chokhar
#include<iostream>
using namespace std;
class Num
{
	protected:
		int a,b;
		void get()
		{
			cout<<"Enter two numbers";
			cin>>a>>b;
		}
		void show()
		{
			cout<<"numbers are=";
			cout<<a<<" "<<b;
		}
		
};
class Addnum:protected Num
{
	protected:
		int c;
		public:
			void set()
			{
			get();	
			}
			void add()
			{
				c=a+b;
			}
			void display()
			{
				show();
				cout<<"sum="<<c;
			}
};
int main()
{
	Addnum obj;
	obj.set();
	obj.add();
	obj.display();
	return 0;
}
