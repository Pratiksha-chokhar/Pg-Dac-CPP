//cpp programs
#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name;
	char grade;//data members
public:
	void get();
    void show();
//member functions
};
void student :: get()
{
	cout<<"enter roll_no,name,grade :";
	cin>>roll_no>>name>>grade;
}
void student :: show()
{
	cout<<roll_no<<name<<grade<<endl;
	
}
int main()
{
	student s1;
	s1.get();
	s1.show();
	
}
