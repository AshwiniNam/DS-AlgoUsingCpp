#include<iostream>
using namespace std;

void kthminmax(int arr[],int size,int pos)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<arr[pos-1];
}

int main()
{
	int size,a[50],k;
	cout<<"Enter the number of elements in the array:";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the k value:";
	cin>>k;
	kthminmax(a,size,k);
}
