#include<iostream>
using namespace std;

int main()
{
	int a,b, count=0;
	cout<<"enter the number:";
	cin>>a;
	if(a>=1000 && a<=9999)
	{
		b=a%10; //ones place
		if(b%2==0)
		{
			count++;
		}
		a=a/10;
		b=a%10; //tens place
		if(b%2==0)
		{
			count++;
		}
		a=a/10;
		b=a%10; //hundredth place
		if(b%2==0)
		{
			count++;
		}
		a=a/10;
		if(a%2==0)
		{
			count++;
		}
		cout<<"count:"<<count;
	}
	else
	{
		cout<<"condition is not satisfied";
	}
	return 0;
	
}
