//program for contsrtuctors in inheritance
//pratiksha chokhar
#include<iostream>
using namespace std;
class base1
{
	protected:
		int a;
		public:
			base1(int i)//constructor
			{
				a=i;
			}
			void show()
			{
				cout<<a<<endl;;
			}
};
class base2
{
	protected:
		int b;
		public:
			base2(int j)//constructor
			{
				b=j;
			}
			void display()
			{
				cout<<b<<endl;;
				
			}
};
class drv:public base1,public base2
{
	protected:
		int c;
		public :
			drv(int p, int q):base1(p),base2(q)
			{
				c=a+b;
				
			}
			void print()
			{
				show();
				display();
				cout<<"their sum="<<c<<endl;
		}
};
int main()
{
	drv obj1(10,20);
	drv obj2(20,70);
	obj1.print();
	obj2.print();
}
