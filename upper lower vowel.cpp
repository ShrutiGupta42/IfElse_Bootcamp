#include<iostream>
using namespace std;

int main()
{
	char a;
	cout<<"enter the character:";
	cin>>a;
	
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='O' || a=='U' || a=='I')
	{
		if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
		{
			cout<<"it is a lowwercase vowel";
		}
		else
		{
			cout<<"it is an uppercase vowel";
		}
	}
	else
	{
		cout<<"not a valid condition";
	}
	
	return 0;
}
