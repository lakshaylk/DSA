#include <iostream>

using namespace std;

int main()
{
	int a=10;
	int &r=a;
	
	int  b=30;
	r=b;                // r will not take reference of b. It will take only value of b
	
	cout<<a<<endl<<r<<endl;
	
	return 0;
}
