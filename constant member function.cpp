//program for constant member function.
//pratiksha chokhar
#include<iostream>
using namespace std;
	class bank
	{
		float IR;
		public:
			bank(float a):IR(3.14)
			{
				IR=a;
			}
			void show()const//read only ,it cannot change value .at a time ine value displayed.
			{
				cout<<IR;
			}
	};
	int main()
	{
		bank b(7.5);
		b.show();
	}
