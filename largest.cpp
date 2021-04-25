#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout<<"enter the first no.";
	cin>>a;
	cout<<"enter the second no.";
	cin>>b;
	cout<<"enter the third no.";
	cin>>c;
	
	if(a<b && a<c)
	{
		if(b<c)
		{
			cout<<"third no. is the greatest";
		}
		else
		{
			cout<<"second no. is largest";
		}
	}
	else
	{
		cout<<"first no. is largest";
	}
	
	return 0;
}
