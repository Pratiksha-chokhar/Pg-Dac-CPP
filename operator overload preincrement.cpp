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
		//void operator ++();
		void operator ++(int);
		void show()
		{
			cout<<count<<endl;
		}
	};
	//void counter::operator ++()
	void counter::operator ++(int)
	{
		count++;
		//counter temp;
		//temp.count=count++;
	//return (temp);
	}
	int main()
	{
		counter a=10;
		a.show();
		a++;
		//++a;//a.operator ++();
		a.show();
		
		return 0;
	}

