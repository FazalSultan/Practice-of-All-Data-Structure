#include<iostream>
using namespace std;
int factorail(int val)
{
	if(val == 0 || val==1)
	{
		return 1;
	}
	else
	{
		return val*factorail(val-1);
	}
	
}
int main()
{
	int value;
	cout<<"Enter Your Value: ";
	cin>>value;
	int b;
	b=factorail(value);
	cout<<b;
	return 0;
}
