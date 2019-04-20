//program for static function and calling
//pratiksha chokhar
#include<iostream>
using namespace std;
class data
{
	int a;
	static int b;
	public:
		static void show()
		{
			cout<<a;
			cout<<b;
		}
};
int data::b=10;
int main()
{
data d1;
d1.show();
data::b=20;
data d2;
d2.show();
return 0;
}
