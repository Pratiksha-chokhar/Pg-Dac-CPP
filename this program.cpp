//program for this pointer
//pratiksha chokhar
#include<iostream>
using namespace std;
class Box{
	int l,b,h;
	public:
		Box(int l, int b, int h)
		{
		this->l=l;//this operator used
		this->b=b;
		this->h=h;
		}
void show()
{
	cout<<this->l<<this->b<<this->h<<endl;
}
};
int main()
{
	Box b1(30,80,100);
	b1.show();
	Box b2(50,100,200);
	b2.show();
	b1.show();
	return 0;
}
