#include<iostream>

using namespace std;

int add(int a,int b)
{
	int c;
	c=a+b;
	
	//  a++;
	//  cout<<a<<endl;
	
	return c;
}

int main()
{
	int num1=10, num2=15, sum;
	sum=add(num1,num2);
	
	cout<<sum;
	
	return 0;
}