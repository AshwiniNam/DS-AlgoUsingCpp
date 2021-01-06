#include<iostream>
using namespace std;
int main()
{
	int size,i,a[50],j,pos;
	cout<<"enter the size of array";
	cin>>size;
	
	//reading the array
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter the position of the array to be deleted:";
	cin>>pos;
	
	//deletion using swapping
	for(j=pos-1;j<size-1;j++)
	{
		a[j]=a[j+1];
	}
	size--;
	
	//printing the array after deletion
	for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
