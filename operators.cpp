#include<iostream>
using namespace std;

int main()
{
	int a, b;
	char y;
	float d;
	
	cout<<"enter the first no.";
	cin>>a;
	cout<<"enter the second no.";
	cin>>b;
	cout<<"enter the operator";
	cin>>y;
	
	if(y=='+')
	{
		d=a+b;
		cout <<"the sum of numbers is";
		cout<<d;
	}
	else
	{
		if(y=='-')
		{
			d=a-b;
			cout<<"the difference of numbers is";
			cout<<d;
		}
		else
		{
			if(y=='*')
			{
				d=a*b;
				cout<<"the product of numbers is:";
				cout<<d;
				
			}
			else
			{
				if(y=='/')
				{
					d=a/b;
					cout<<"the division of numbers is:";
					cout<<d;
				}
				else
				{
					cout<<"not a valid operator";
				}
			}
		}
		
	}
	
	return 0;
}
