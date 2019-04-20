//program for friend function
//pratiksha chokhar
#include<iostream>
using namespace std;
class student
{
	int roll;
	char grade;
	float per;
	public:
		void get()
		{
			cout<<"enter roll, grade,per :"<<endl;
			cin>>roll>>grade>>per;
			
		}
	friend void show(student);
	};
	void show(student p)
		{
			cout<<p.roll<<p.grade<<p.per<<endl;
		}
		int main()
		{
			student s;
			s.get();
			show(s);
			return 0;
		}
