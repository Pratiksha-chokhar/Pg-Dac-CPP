//progra, for reallocation of memory
//pratiksha chokhar
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int size;
	cout<<"enter the size of an array";
	cin>>size;
	int *p=(int *)calloc(5,sizeof(int));//memory allocation through calloc.
	if(p==NULL)//for checking memory is available or not.
	{
		cout<<"Insufficient memory";
		exit(1);
	}
	for(int i=0;i<size;i++)//accepting array element
	{
		cin>>p[i];
		//cout<<"array of previous element"<<p[i]<<endl;
	}
	int *q=(int *)realloc(p,10*sizeof(int));// reallocating extra memory (5 block extra)
	if(q==NULL)//again check for memory is full or not.
	{
		cout<<"Insufficient memory";
		exit(1);
		
	}
	for(int j=size;j<10;j++)//assign new element in array
	{
		cin>>q[j];
		//cout<<"array of newly added element"<<q[j]<<endl;
	}
	for(int k=0;k<10;k++)//printing all new created array
	{
		cout<<q[k];
	}

}
