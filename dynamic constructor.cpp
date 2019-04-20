//accessing array using dynamic constructor
//pratiksha chokhar
#include<iostream>
#include<stdlib.h>
using namespace std;
class emp
{
	int emp_id;
	float sal;
	public:
		void get()
		{
			cout<<"enter emp_id and salary"<<endl;
			cin>>emp_id>>sal;
		}
		void show()
		{
			cout<<emp_id<<sal<<endl;
		}
		emp()
		{
			cout<<"in a constructor"<<endl;
		}
		~emp()
		{
			cout<<"in a destructor"<<endl;
		}
		};
int main()
{
	int n;
	cout<<"enter no of emp"<<endl;
	cin>>n;
	emp *e;
	e = new emp[n];
	e[0].get();
	e[0].show();
	e[1].get();
	e[1].show();
	e[2].get();
	e[2].show();
	for(int i=0;i<n;i++)
	{
		e[i].get();
		
	}
	for(int j=0;j<n;j++)
	{
		e[j].show();
	}
}

