//library
#include<iostream>
//namespace
using namespace std;
//a function that adds to int parameters and finds maximum of two numbers
int max(int a,int b)
{
	int max;
	if(a>b)
	{
		 max=a;
	}
	else if(a<b)
	{
		 max=b;
	}
	else
	{
		max=a;
	}
	return max;
}
//main function
int main()
{
	//declaring variables
	int a;
	int b;
	//ask for the value of a
	cout<<"Enter the value of a:"<<endl;
	//read the value of a
	cin>>a;
	//ask for the value of b
	cout<<"Enter the value of b:"<<endl;
	//read the value of b
	cin>>b;
	//print the maximum
	cout<<"The maximum number is:"<<max(a,b);
	return 0;
}
