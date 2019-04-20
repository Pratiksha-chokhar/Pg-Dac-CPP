//string program
//pratiksha chokhar
#include<iostream>
using namespace std;
class student
{
	string name;
	int age;
	float salary;
	public:
	void show();
	student();
	void get();
};
student::student()
{
	//cout<<"enter the details:";
	//cin>>age>>salary;
}
void student::show()
{
	cout<<" details:"<<endl;
	cout<<name<<" "<<age<<" "<<salary<<endl;
	
}
void student::get()
{
cout<<"enter the details:";
	cin>>age>>salary;
	getline(cin,name);

}
int main()
{
	student s1;
	s1.get();
	s1.show();	

	return 0;
}

