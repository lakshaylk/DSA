#include <stdio.h>
#include <stdlib.h>

struct Array
{
	int A[20];
	int size;
	int length;
};

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void Display(struct Array arr)
{
	int i;
	printf("\nElements are \n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.A[i]);
}

void leftshift(struct Array *arr)
{
	int i;
	for(i=0;i<arr->length-1;i++)
		arr->A[i]=arr->A[i+1];
	arr->A[arr->length-1]=0;
}

void rightshift(struct Array *arr)
{
	int i;
	for(i=arr->length-1;i>0;i--)
		arr->A[i]=arr->A[i-1];
	arr->A[0]=0;
}

void rotate(struct Array *arr)
{
	int i;
	int temp=arr->A[0];
	for(i=0;i<arr->length-1;i++)
		arr->A[i]=arr->A[i+1];
	arr->A[arr->length-1]=temp;
}


int main()
{
	struct Array arr={{2,3,4,5,6},20,5};
	
//	leftshift(&arr);
//	rightshift(&arr);
	rotate(&arr);
	Display(arr);
	
	return 0;
}
