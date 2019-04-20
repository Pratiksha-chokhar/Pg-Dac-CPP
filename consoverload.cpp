//constructor overloading
//pratiksha chokhar
#include<iostream>
using namespace std;
class box
{
	float l,b,h;
	public:
		box();
		box(int, int,int);
		box(float);
		void show();
};
void box::show()
{
cout<<"values are:";
cout<<l<<b<<h<<endl;

}
box::box()//non-parameterised
{
	cout<<"enter l,b,h";
	cin>>l>>b>>h;
	
}
box::box(float a)         
{
	l=b=h=a;
}
box::box(int a, int p,int c)
{
	l=a;
	b=p;
	h=c;
	
}
int main()
{
	box b;
	box b1(10,20,60);
	box b2(5.5);
	b.show();
	b1.show();
	b2.show();
	return 0;
	
	
}
