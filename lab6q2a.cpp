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
//main function
int main()
{
	//declaring variables
	int a;
	int b;
	//ask for value of a
	cout<<"Enter the value of a:"<<endl;
	//read value of a
	cin>>a;
	//ask for value of b
	cout<<"Enter the value of b:"<<endl;
	//read value of b
	cin>>b;
	//print sum
	cout<<"The sum of the two numbers is:"<<sum(a,b);
	return 0;
}
