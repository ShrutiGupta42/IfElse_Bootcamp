#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter the number:";
	cin>>a;
	
	if(a>=100 && a<=999 && a%2!=0)
	{
		cout<<"the given no. is three digit odd integer";
	}
	else
	{
		cout<<"condition is not satisfied";
	}
	
	return 0;
}
