//program for polymorphism
//pratiksha chokhar
#include<iostream>
using namespace std;
class Base
{
	public:
	virtual void show()
		{
			cout<<"in base show";
		}
};
class drv:public Base
{
	public:
		void show()
		{
			cout<<"in drv show";
		}
};
int main()
{
	Base *p;
	Base b1;
	p=&b1;
	p->show();
	drv d1;
	p=&d1;
	p->show();
	return 0;
	
}
