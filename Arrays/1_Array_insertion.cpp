//array insertion
#include <iostream>
using namespace std;
int main()
{
	int a[100],size,i,val,p,num;
	
	//reading
	cout<<"Enter the size of the array";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	//insertiondetails
	cout<<"Enter the value to be inserted";
	cin>>num;
	cout<<"enter the position at which the value is to inserted";
	cin>>p;
	
	//swapping
	for(i=size-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=num;
	size++; //***Important***
	
	//printing the new array
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
