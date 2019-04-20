//copy constructor also using this pointer
//pratiksha chokhar
#include<iostream>
using namespace std;
class ball
{
	int l, b,h;
	public:
		ball();
		ball(int);
		ball(int, int);
		ball(int,int, int);
		ball(ball&);
		void show();
	};
	void ball::show(){
		cout<<"values are:";
		cout<<l<<b<<h;
	}
	ball::ball()
    {
    	cout<<"enter l,b,h";
    	cin>>l>>b>>h;
    	
	}
	ball::ball(int p)
	{
		l=b=h=p;
		
	}
	ball::ball(int p, int q,int r)
	{
		l=p;
		b=q;
		h=r;
	}
	ball::ball(ball&a)
	{
		*this=a;
		//l=a.l;
		//b=a.b;
		//h=a.h;
	}
	int main()
	{
		ball b;
		ball b1(10); 
		ball b2(10,20,30);
		ball b3(b2);
		b1.show();
		b2.show();
		b3.show();
		return 0;
	}
	
