//program for static member function
//pratiksha chokhar
#include<iostream>
using namespace std;
class Demo
{
	public:
		static void show()
		{
			cout<<"the static function ";
		}
};


int main()
{
	Demo::show();
}
