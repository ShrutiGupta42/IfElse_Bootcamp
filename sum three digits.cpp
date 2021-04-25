#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter the no.";
	cin>>a;
	
	if(a>=100 && a<=999)
	{
		int x , y, sum;
		x=a%10; //ones place
 	    a=a/10;// hundred tens place
 	    y=a%10; //tens place
 	    a=a/10; // hundreds place
 	    sum= a+x+y;
 	    
 	    cout<<"the sum of digits of the given no. is:";
 	    cout<<sum;
	}
	else
	{
		cout<<a;
	}
	
	return 0;
}
