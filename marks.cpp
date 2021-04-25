#include<iostream>
using namespace std;

int main()
{
	float english, hindi, maths, science, result, percent;
	
	cout<<"enter the marks of each subject out of 100 \n";
	cout<<"Enter english marks:";
	cin>>english;
	cout<<"Enter hindi marks:";
	cin>>hindi;
	cout<<"Enter maths marks:";
	cin>>maths;
	cout<<"enter science marks:";
	cin>>science;
	 
	result= hindi+english+maths+science;
	percent=(result/400)*100;
	
	if(percent>=60 && percent<=100)
	{
		cout<<"First divsion";
	} 
	else if(percent<60 && percent>=50)
	{
		cout<<"second division";
	}
	else if(percent<50 && percent>=40)
	{
		cout<<"third division";
	}
	else if(percent< 40)
	{
		cout<<"re appear";
	}
	else
	{
		cout<<"enter the valid marks";
	}
	
	return 0;

}
