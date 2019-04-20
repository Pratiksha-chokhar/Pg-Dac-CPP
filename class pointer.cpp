//program for passing an object using pointer
//pratiksha chokhar
#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
		void get()
		{
			cout<<"Enter l,b,h;"<<endl;
			cin>>l>>b>>h;
		}
		void show()
		{
			cout<<l<<b<<h;
			
		}
		int compare(box *);
	//	int compare(box &);
};
     //int box::compare(box &p)
	int box::compare(box *p)
	{
		int x,y;
		x=l*b*h;
		y=p->l*p->b*p->h;
			//y=p.l*p.b*p.h;
		if(x==y)
		{
			return 0;
		}
		if(x>y)
		{
			return 1;
		}
		else
		return -1;
	}

	int main()
	{
		box b1, b2;
		b1.get();
		b2.get();
		b1.show();
		b2.show();
		int r=b1.compare(&b2);
		//int r=b1.compare(b2);
		if(r==0)
		cout<<"both are equal"<<endl;
		if(r==1)
		cout<<"b1 is greater"<<endl;
		else
		cout<<"b2 is greater"<<endl;
	}

