//library
#include<iostream>
//namespace
using namespace std;
//a void function that stores the maximum value in another int parameter
void max(int a,int b, int &c)
{
	if(a>b)
	{
		c=a;
	}
	else if(a<b)
	{
		c=b;
	}
	else
	{
		c=a;
	}
}
//main function
int main()
{
	//declaring variables
	int a;
	int b;
	int c;
	//ask for the value of a
	cout<<"Enter the value of a:"<<endl;
	//read a
	cin>>a;
	//ask for the value of b
	cout<<"Enter the value of b:"<<endl;
	//read b
	cin>>b;
	max(a,b,c);
	//print the maximum number
	cout<<"The maximum number is:"<<c<<endl;
	return 0;
}
