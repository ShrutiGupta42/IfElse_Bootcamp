#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout<<"enter the first no.:";
	cin>>a;
	cout<<"enter the second no.:";
	cin>>b;
	cout<<"enter the third no.:";
	cin>>c;
	
	if(a>b && a>c)
	{
		cout<<"first no. is greatest \n";
	}
	else if(b>c)
	{
		cout<<"second no. is greatest \n";
	}
	else
	{
		cout<<"third no. is greatest \n";
	}
	
	if(a<c && a<b)
	{
		cout<<"first no. is smallest \n";
	}
	else if(b<c)
	{
		cout<<"second no. is smallest \n";
	}
	else
	{
		cout<<"third no. is smallest \n";
	}
	
	if((a>b && a<c) || (a>c && a<b))
	{
		cout<<"first no. is middle one \n";
	}
	else if((b>c && b<a) || (b>a && b<c))
	{
		cout<<"second no. is middle one \n";
	}
	else if((c>a && c<b) || (c>b && c>a))
	{
		cout<<"third no. is middle no. \n";
	}
	
	return 0;
}
