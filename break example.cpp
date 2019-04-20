#include<iostream>
using namespace std;
int main()
{

		
	 for(int i=0;i<5;i++)
	 {
	 	cout<<"outer loop:"<<i<<endl;
	 	for(int j=1;j<5;j++)
	 	{
	 		if(j%3==0)
	 		{
	 			cout<<"breaking out from inner loop";
	 			break;
			 }
			 cout<<"Inner loop:"<<j<<endl;
		
}
}
}
