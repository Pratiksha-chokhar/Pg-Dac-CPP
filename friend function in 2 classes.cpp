//program for friend function
//pratiksha chokhar
#include<iostream>
using namespace std;
class Beta; //class 1: forword declaration
class Alpha // class2
{
	int x;
	public:
 void compare(Alpha,Beta); //friend function declaration
				friend void get()
		{
			cout<<"Enter an int:"<<endl;
			cin>>x;
				}
};


class Beta
{
	int y;
	public:
		void compare(Alpha, Beta);
		void set()
		{
			cout<<"enter an int:";
			cin>>y;
		}
};
void compare(Alpha a, Beta b) //function defination
{
	if(a.x>b.y)
	{
		cout<<"greater is :"<<a.x;
	}
	else
	{
		cout<<"greater is :"<<b.y;
	}
}
int main()
{
	Alpha obj1;
	Beta obj2;
	obj1.get();
	obj2.set();
	compare(obj1,obj2);
	return 0;
}
