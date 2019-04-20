//program for operator overloading
//pratiksha chokhar
#include<iostream>
using namespace std;
class counter
{
	int count;
	public:
		counter()
		{
			count=0;
		}
		counter(int c)
		{
			count =c;
		}
		void operator ++();
		void show()
		{
			cout<<count<<endl;
		}
	};
	void counter::operator ++()
	{
		++count;
	}
	int main()
	{
		counter a=10;
		a.show();
		++a;//a.operator ++();
		a.show();
		return 0;
	}

