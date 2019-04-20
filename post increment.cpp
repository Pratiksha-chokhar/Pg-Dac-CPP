//program for post increment
//pratiksha chokhar
#include<iostream>
using namespace std;
class counter
{
	int count;
	public:
		counter()
		{
			count=0;
		}

counter(int c)
{
	count=c;
}
counter operator++(int);
void show()
{
	cout<<count<<endl;
}
};
counter counter :: operator++(int)
{
	counter temp;
	temp.count=count++;
	return(temp);
}
int main()
{
	counter obj1=10,obj2;
	obj1.show();
	obj2=obj1++;
	obj1.show();
	obj2.show();
	return 0;
}


