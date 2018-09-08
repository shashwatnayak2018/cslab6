//library
#include<iostream>
//namespace
using namespace std;
//a function to find the minimum of the two int parameters
int min(int a,int b)
{
	int min;
	if (a<b)
	{
		min=a;
	}
	else if(b<a)
	{
		min=b;
	}
	else
	{
		min=a;
	}
	return min;
}
//main function
int main()
{
	//declaring variables
	int a;
	int b;
	//asking for the value of a
	cout<<"Enter the value of a:"<<endl;
	//read the value of a
	cin>>a;
	//ask for tehe value of b
	cout<<"Enter the value b:"<<endl;
	//read the value of b
	cin>>b;
	//print the minimum value
	cout<<"The minimum value is:"<<min(a,b)<<endl;
	return 0;
}
