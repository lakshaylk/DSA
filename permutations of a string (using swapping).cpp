#include <iostream>

using namespace std;

void swap(int* a,int* b)
{
	int* temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}

void perm(char S[],int l,int h)
{ 
	int i;
	if(l==h)
	{
		cout<<S;
	}
	else
	{
		for(i=0;i<=h;i++)
		{
			swap(S[l],S[i]);
			perm(S,l+1,h);
			swap(S[l],S[i]);
		}
	}
}

int main()
{
	char S[]="ABCD";
	perm(S,0,3);
	
	return 0;
}
