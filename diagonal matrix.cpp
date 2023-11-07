#include <iostream>
using namespace std;

void set(int A[], int i, int j, int x)
{
	if(i==j)
	{
		A[i-1]=x;
	}
}

int get(int A[],int i,int j)
{
	if(i==j)
		return A[i-1];
	else
		return 0;
}

int main()
{
	int A[]={2,6,4,8,9};
	set(A,3,3,5);
	cout<<get(A,3,3)<<endl;
	
	return 0;
}
