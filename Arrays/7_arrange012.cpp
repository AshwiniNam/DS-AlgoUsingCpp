//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order

#include<iostream>
using namespace std;

//function to arrange
void arrange(int arr[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i]= arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int size,a[50];
	cout<<"Enter the size of the array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	arrange(a,size);
}
