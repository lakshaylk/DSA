#include <iostream>
using namespace std;

void swap(char* x,char* y)
{
	char* temp;
	*temp=*x;
	*x=*y;
	*y=*temp;
}

int main()
{
	char A[]="Python";
	char B[7];
	int i;
	int len=sizeof(A)/sizeof(A[0]);

	// Method 1 (self)
/*	B[6]=A[6];
	
	for(i=0;i<len-1;i++)
		B[i]=A[len-i-2];
	
	cout<<B;
*/	

	//  Method2
/*	int j;
	for(i=0;A[i]!='\0';i++)
	{
	}
	i=i-1;
	for(j=0;i>=0;i--,j++)
	{
		B[j]=A[i];
	}
	B[j]='\0';
	printf("%s",B);
*/	
	
	// Method 3(self)
/*	for(i=0;i<=len/2;i++)
		swap(A[len-i-2],A[i]);
	
	cout<<A;
*/
	
	//  Method 4
	char t;
	int j;
	for(j=0;A[j]!='\0';j++)
	{
	}
	j=j-1;
	for(i=0;i<j;i++,j--)
	{
		t=A[i];
		A[i]=A[j];
		A[j]=t;
	}
	cout<<A;
	
	return 0;
}
