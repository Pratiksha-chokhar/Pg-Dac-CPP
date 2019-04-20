//pratiksha chokhar
//program for simple cpp
#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name[10];
	public:
	
	void get();
	void show();
};
void student :: get()// prototype 
{
	cout<<"Enter the roll_no and name:"<<endl;
	cin>>roll_no>>name;
}

void student:: show()
{
	cout<<"student details are:"<<endl;
	cout<<roll_no<<name<<endl;
}
int main()
{
	student s1;
	s1.get();
	s1.show();
}
