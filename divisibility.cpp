#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter the number:";
	cin>>a;
	
	if(a%4==0 || a%5==0 || a%6==0 )
	{
		cout<<"the given no. is divisible by 4 , 5 or 6";
	}
	else
	{
		cout<<"the condition is not satisfied";
	}
	
	return 0;
}
