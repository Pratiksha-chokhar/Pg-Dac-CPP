/* program to implement bubble sort*/
#include<iostream>
using namespace std;
void bubblesort(char a[], int n);
int main ()
{
	int i,n;
	char a[50];
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cout<<"Enter the array element:"<<endl;
		cin>>a[i];
	}
	bubblesort(a,n);
}
void bubblesort(char a[], int n)
{
	int i,j,temp=0;
	for(int i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=temp;
				a[j]=a[i];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<"sorted array is:"<<endl;
		cout<<a[i]<<endl;
	}
}
