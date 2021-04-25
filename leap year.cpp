#include<iostream>
using namespace std;

int main()
{
	int year;
	
	cout<<"enter the year";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<"the entered year is leap year";
	}
	else
	{
		cout<<"the entered year is not leap year";
	}
	
	return 0;
}
