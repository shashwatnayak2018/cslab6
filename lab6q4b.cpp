//library
#include<iostream>
//namespace
using namespace std;
//a void function that stores the minimum of the two int parameters in another int parameter
void min(int a, int b,int &c)
{
	if(a<b)
	{
		c=a;
	}
	else if(a>b)
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
	//read the value of a
	cin>>a;
	//ask for the value of b
	cout<<"Enter the value of b:"<<endl;
	//read the value of b
	cin>>b;
	//print the minimum value
	min(a,b,c);
	cout<<"The minimum value is:"<<c<<endl;
	return 0;
}
