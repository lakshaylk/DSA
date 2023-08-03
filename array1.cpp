#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int A[10]={2,4,6,8,10,20,22}; // Elements at index 8 & 9 where no value is given will be '0'
	
	cout<<sizeof(A)<<endl;
	cout<<A[8]<<endl;         // Therefore, A[8]=0 
	printf("%d\n",A[9]);      // also A[9]=0
	
	return 0; 
}

