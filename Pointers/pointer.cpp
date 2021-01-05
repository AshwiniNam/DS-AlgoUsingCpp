//pointer

#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int *p=a;
	
	for(int i=0;i<5;i++)
	{
		cin>>*(p+i); //p has the address of a[0], with every inc value of i the pointer moves to next array element
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<*(a+i); //a is the base address, here a and p are pointing the same base address
	}
	
}
