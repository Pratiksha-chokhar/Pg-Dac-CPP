//programs for shallow copy.
//pratiksha chokhar
#include<iostream>
using namespace std;
int c;
class test
{
	int a,b;
	int *p;
	
	public:
		test(int d, int e,int q)
		{
			p=&c;
			a=d;
			b=e;
			*p=q;
		}
		void show()
		{
			cout<<a<<b<<c<<*p;
		}
	};
	int main()
	{
		test t1(20,30,40);
		t1.show();
		test t2=t1;
		return 0;
	}

