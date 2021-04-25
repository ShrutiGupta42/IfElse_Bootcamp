#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float salary, bonus, netsal;
	
	cout<<"Enter the salary of the employee:";
	cin>>salary;
	
	if(salary>=15000)
	{
		bonus= 0.1*salary;
		netsal=salary+bonus;
		cout<<"the salary is:";
		cout<<salary;
		cout<<"\n";
		cout<<"the bonus is:";
		cout<<bonus;
		cout<<"\n";
		cout<<"the net salary is:";
		cout<<netsal;
		cout<<"\n";
	}
	else if(salary<15000 && salary>=10000)
	{
		bonus= 0.08*salary;
		netsal=salary+bonus;
		cout<<"the salary is:";
		cout<<salary;
		cout<<"\n";
		cout<<"the bonus is:";
		cout<<bonus;
		cout<<"\n";
		cout<<"the net salary is:";
		cout<<netsal;
		cout<<"\n";
	}
	else if(salary<10000)
	{
	    bonus=0;
		netsal=salary+bonus;
		cout<<"the salary is:";
		cout<<salary;
		cout<<"\n";
		cout<<"the bonus is:";
		cout<<bonus;
		cout<<"\n";
		cout<<"the net salary is:";
		cout<<netsal;
		cout<<"\n";	
	}
	else
	{
		cout<<"enter the valid condition";
	}
	
	return 0;
}
