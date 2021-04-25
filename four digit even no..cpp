#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter the number:";
	cin>>a;
	
	if(a>=1000 && a<=9999 && a%2==0)
	{
		cout<<"the guven no. is four digit even integer";
	}
	else
	{
		cout<<"condition is not satisfied";
	}
	
	return 0;
}
