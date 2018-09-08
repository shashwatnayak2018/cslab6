//library
#include<iostream>
//namespace
using namespace std;
//function that add two int parameters
int sum(int a,int b)
{
	int sum=a+b;
	return sum;
}
//fumction that finds the minimum of two numbers
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
//function that finds the maximum of two numbers
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
	//define variables
	int a;
	int b;
	char c;
	//ask for the value of a
	cout<<"Enter the value of a:"<<endl;
	//read the value of a
	cin>>a;
	//ask for the value of b
	cout<<"Enter the value of b:"<<endl;
	//read the value of b
	cin>>b;
	//ask for the operator
	cout<<"Enter the character based on what you want to use from x(for max),y(for min) and z(for sum):"<<endl;
	//read the operator
	cin>>c;
	//use the operator
	if(c=='x')
	{
		cout<<"The maximum number is:"<<max(a,b)<<endl;
	}
	else if(c=='y')
	{
		cout<<"The minimum number is:"<<min(a,b)<<endl;
	}
	else if(c=='z')
	{
		cout<<"The sum of the two numbers is:"<<sum(a,b)<<endl;
	}
	else
	{
		cout<<"choose from x,y and z"<<endl;
	}
	return 0;
}
