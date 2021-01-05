//reverse array using functions
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//function to reverse the array
void reverse(int arr[],int start,int end)
{
	int temp=0;
	while(start<end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end]= temp;
		start++;
		end--;
	}
}

//function to print the array
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int a[]={1,2,3};
	int t=sizeof(a)/sizeof(a[0]);
	reverse(a,0,t-1);
	print(a,t);
}
