//program for student class
//pratiksha chokhar
#include<iostream>
using namespace std;
class student
{
	
	int size;
	public:
		void getstring();
		void show();
		void reversestring();
		
};
void getstring()
{
	for(i=0;i<size;i++)
	{
		cout<<"enter value of array";
		cin>>p[i];
		
	}
}
void show()
{
	cout<<"the result is:"<<endl;
	cout<<p[i];
}
 student :: student(int n)
{
p=new student[n];
size=n;	
	
}
void revstring(student s)
{
	s.strrev(s);
}
int main()
{
	int size;
	cout<<"enter size of array";
	cin<<size;
	char *p = new int[size];
	
	
	student s;
	
	s.getstring();
	s.show();
	s.reversestring();
}
