//program for continue statement
//pratiksha chokhar
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	while(i<10)
	{
		if(i%4==0)
		{
			i++;
			continue;
		
		}
	
		cout<<i<<endl;
			i++;
	}
}
