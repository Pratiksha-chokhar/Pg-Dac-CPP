//cpp programs
#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name;
	char grade;//data members
public:
void show();//member functions
student();
};
student :: student()
{
	cout<<"enter roll_no,name,grade";
	cin>>roll_no>>name>>grade;
}
void student :: show()
{
	cout<<roll_no<<name<<grade<<endl;
	
}
int main()
{
	student s1;
	s1.show();
	
}
