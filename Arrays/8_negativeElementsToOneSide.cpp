#include<iostream>
using namespace std;
int main()
{
	int a[100],size,k=0,temp=0;
	
	//taking in the array values
	cout<<"Enter the size of the array:";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	//swapping the negative values
	for(int j=0;j<size;j++)
	{
		if(a[j]<0)
		{
			temp = a[k];
			a[k]=a[j];
			a[j]=temp;
			k++;
		}
	}
	
	//Printing the array
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
