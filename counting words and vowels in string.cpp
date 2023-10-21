#include <iostream>
using namespace std;


int main()
{
	int i,vcount=0,ccount=0;
	int word=1;
	char A[]="My Name is Lakshay";
	cout<<"The String is: "<<A<<endl;
	char c;
	for(i=0;A[i]!='\0';i++)
	{
		c=A[i];
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		{
			vcount++;
		}
		else if((c>=65 && c<=90) || (c>=97 && c<=122))
		{
			ccount++;
		}
	}
	cout<<"No. of Vowels: "<<vcount<<endl;
	cout<<"No. of Consonents: "<<ccount<<endl;
	
	for(int j=0;A[j]!='\0';j++)
	{
		if(A[j]==' ' && A[j-1]!=' ')
			word++;
	}
	cout<<"No. of Words: "<<word;
	
	return 0;
}
