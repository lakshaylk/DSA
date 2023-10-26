#include<stdio.h>
#include<iostream>
#include<stdlib.h>

int main()
{
	int A[5]={2,4,6,8,10};
	int *p;
	int *p1;
	
	p1 = (int *)malloc(5*sizeof(int));              // In C

	p=new int[5];                 //   In C++
	p[0]=3;
	p[1]=5;
	p[2]=7;
	p[3]=9;
	p[4]=11;
	
	for(int i=0;i<5;i++)                  // For A
	{
		printf("%d ",A[i]);
	}
	
	printf("\n");
	
	for(int i=0;i<5;i++)                  // For p
	{
		printf("%d ",p[i]);
	}

	return 0;
}
