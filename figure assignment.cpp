//program for calculate area.
#include<iostream>
using namespace std;
class figure
{
	public:
		virtual void area()=0;                                                                                                                                                                    

};

class Rectangle:public figure
{
	private:
		int a,b;
		public:
		Rectangle(int x,int y)
		{
			a=x;
			b=y;
		}
		void area()
		{
		
		cout<<"Area of an Rectangle is :"<<a*b<<endl;
	}
};
	class triangle : public figure
	{
	private:
		int p,q;
		public:
		triangle(int l,int m)
		{
			p=l;
			q=m;
		}
		void area()
		{
		cout<<"Area of an triangle is :"<<(0.5*p*q)<<endl;
	}	
		
	};
	class circle : public figure
	{
		private:
			int r;
			public:
			circle(int t)
			{
				r=t;
			}
			void area()
		{
		cout<<"Area of an circle is :"<<(3.14*r*r)<<endl;
	}
};
	int main()
	{
		figure *f;
		f=new Rectangle(10,20);
		f->area();
		f=new triangle(10,20);
		f->area();
		f=new circle(5);
		f->area();
		return 0;

	
		
	
	}
