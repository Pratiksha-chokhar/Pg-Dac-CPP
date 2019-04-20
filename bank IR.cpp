//program for constant parameter
//pratiksha chokhar
#include<iostream>
using namespace std;
class bank
{
	const float IR;
	public:
	bank(float a):IR(3.14)//we cannot change the value of constant parameter.
		{
		//	IR=a;
			
		}
		void show()
		{
			cout<<IR;
		}
};
int main()
{
	bank b(7.5);
	b.show();
}
