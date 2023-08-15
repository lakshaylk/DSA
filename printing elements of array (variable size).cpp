#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter Size";
	cin>>n;
	
	//int A[n]={2,4,6,8,10,20};  //We cannot use it because valiable size array cannot be initialized
	
	int A[n];
	A[0]=2;      // If we will not asign other values then it will assign garbage values 
	
	for(int i=0;i<10;i++)
	{
		cout<<A[i]<<endl;
	}
	
		
	//Alternate
//	for(int x:A)
//	{
//		cout<<x<<endl;
//	}
	
	return 0; 

}
