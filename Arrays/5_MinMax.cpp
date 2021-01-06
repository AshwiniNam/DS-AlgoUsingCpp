//Find the minimum and maximum element of an array

#include<iostream>
using namespace std;

//Function to find the minimum and maximum
void minmax(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(array[i]>array[j])
			{
				int temp= array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	
	cout<<"Minimum is:" << array[0]<<endl;
	cout<<"Maximum is:" <<array[size-1]<<endl;
	
}

int main()
{
	int arr[] = {20,33,5,43,32,22,199};
	int t= sizeof(arr)/sizeof(arr[0]);
	minmax(arr,t);
}
