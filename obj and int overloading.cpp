//program for object and int overloading
#include<iostream>
using namespace std;
class box
{
	int meter;
	public:
		void get()
		{
			cout <<"Enter the values:"<<endl;
			cin>>meter;
		}
		void show()
		{
			cout<<meter<<endl;
		}
	box operator+(int);
		
};
box box::operator+(int)
{
	box temp;
	temp.meter=meter+6;
	return(temp);
	
}
int main()
{
	box b1,b2;
	b1.get();
	b2=b1.operator+(6);
	b2.show();
	return 0;
}
