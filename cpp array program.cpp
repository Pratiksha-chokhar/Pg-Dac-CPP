//program for simple array element
//pratiksha chokhar
#include<iostream>
using namespace std;
class Box
{
	int n, i;
	int arr[10][10];
	public:
		void get();
		void show();
};
void Box::get()
{
	cout<<"Enter the size of an array:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
	
	{
	cout<<"enter array element :"<<endl;
cin>>arr[i][j];
	}
}
}
 void Box::show()
{
	for(i=1;i<=n;i++)
	{
	for(int j=1;j<=n;j++)
	{
	cout<<"array is:"<<arr[i][j]<<endl;
}
}
}
int main()
{
	Box b1;
	b1.get();
	b1.show();
}
