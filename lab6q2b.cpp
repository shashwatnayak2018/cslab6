//library
#include<iostream>
//namespace
using namespace std;
//void function that adds two integer parameters and the sum  a third int parameter
void sum(int a,int b,int &c)
{
	c=a+b;
}
//main function
int main()
{
	//declaring variables
	int a;
	int b;
	int c;
	//ask  for the value of a
	cout<<"Enter the value of a:"<<endl;
	//read the value of a
	cin>>a;
	//ask for the value of b
	cout<<"Enter the value of b"<<endl;
	//read the value of b
	cin>>b;
	//print the sum
	sum(a,b,c); 
	cout<<"The sum of the two numbers is:"<<c<<endl;
	return 0;
}
