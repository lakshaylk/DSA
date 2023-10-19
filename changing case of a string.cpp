#include <iostream>

using namespace std;

int main()
{
	char A[]="welcome";
	int i=0;
	
/*	//  From upper to lower
	for(i=0;A[i]!='\0';i++)
	{
		A[i]+=32;
	}
	cout<<A;
*/
	
	//  From lower to upper
	for(i=0;A[i]!='\0';i++)
	{
		A[i]-=32;
	}
	cout<<A;
	

	return 0;
	
}
