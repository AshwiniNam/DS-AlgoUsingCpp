//Reverse the array

#include<iostream>
using namespace std;
int main()
{
	int inputarray[30],i,temp=0,size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	
	//taking the input values
	for(i=0;i<size;i++)
	{
		cin>>inputarray[i];
	}

	//reversing
	for(i=0;i<size/2;i++)
	{
		temp=inputarray[i];
		inputarray[i]=inputarray[size-i-1];
		inputarray[size-i-1]=temp;
	}
	
	//printing the reversed array
	for(i=0;i<size;i++)
	{
		cout<<inputarray[i]<<" ";
	}
}


