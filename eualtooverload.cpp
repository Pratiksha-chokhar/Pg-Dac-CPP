//program for equal to operator overloading
#include<iostream>
using namespace std;
class box
{
	int meter,km;
	public:
		void get()
		{                                                                                                                           
			cout <<"Enter the values:"<<endl;
			cin>>meter>>km;
		}
		void show()
		{
			cout<<meter<<km<<endl;
		}
	box operator==(box);
		
};
box box::operator==(box p)
{
	if(meter==p.km)
	{
		cout<<"equal"<<endl;
	}
	else{
		cout<<"not equal"<<endl;
	}
	
}
int main()
{
	box b1;
	b1.get();
	b1.operator==(b1);
	b1.show();
	return 0;
}
