//sum print using constructor
//pratiksha chokhar
#include<iostream>
using namespace std;
class demo
{
	int num1,num2;
	
	public:
		demo()
		{
			cout<<"Enter no's:";
			cin>>num1>>num2;
		}
		
		int sum()
		{
			return(num1+num2);
		}

	};
		int main()
		{
			demo d;
			int r=d.sum();
			cout<<r;
			return 0;
		}
		
