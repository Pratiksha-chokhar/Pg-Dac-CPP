//program for employee entries:
//pratiksha chokhar
#include<iostream>
using namespace std;
class employee
{
	int age, id;
	string name;
	float salary;
	public:
		void get();
		void show();

	};

	void employee::get()
	{
		cout<<"enter the name age>>id>>salary>>name "<<endl;
		cin>> age>>id>>salary>>name;

	}
	void employee::show()
	{
		cout<<"employee entries are:"<<endl;
		cout<<name<<age<<id<<salary<<endl;
	}


int main()
{
employee emp;
emp.get();
emp.show();
	return 0;
	
}
