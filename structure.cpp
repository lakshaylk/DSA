#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle 
{
	int length;
	int breadth;
	char x;       // It will take its size as 4 but use only 1. This allocation of nearly greater size(i.e. of int(4) is called padding) 
};

/*
  We can declare the variable as
  struct Rectangle r1;           (inside main or outside main function)

  Or
  
  We can also declare the variable as 
  struct Rectangle
  {
  	int length;
  	int breadth;
  }r1,r2,r3;

*/
int main()
{
	struct Rectangle r1={10,5};
	
	r1.length = 15;
	r1.breadth = 7;
	
	cout<<r1.length<<endl;
	cout<<r1.breadth<<endl;
	
	// printf("%d", sizeof(r1));
	// printf("%lu", sizeof(r1));
	return 0;
}
