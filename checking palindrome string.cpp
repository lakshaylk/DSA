#include <iostream>
using namespace std;

int main()
{
	char A[]="madam";
	char B[6];
	B[5]='\0';
	int len=sizeof(A)/sizeof(A[0]);               
	int i,j;
	for(i=0;A[i]!='\0';i++)
	{
		B[i]=A[len-i-2];
	}
	
	for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
	{
		if(A[i]!=B[j])
			break;
	}
	if(A[i]==B[j])
		cout<<A<<" is Palindrome.";
		
	else
		cout<<A<<" is not Palindrome.";
		
		
	// Another method (without using another array)
/*	
	int i,j;
	int flag=1;
	for(i=0,j=len-2;i<j;i++,j--)
	{
		if(A[i]!=A[j])
		{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
*/	
	
	return 0;
}
