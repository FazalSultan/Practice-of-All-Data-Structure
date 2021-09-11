#include<iostream>
using namespace std;
int fac (int a)
{
	//int a;
//	cout<<"Enter Your Number: ";
	//cin>>a;
	if(a == 1 || a == 0)
	{
		return a ;
	}
	else
	{
		return a*fac(a-1);
	}
}
int main()
{
	int a;
	//cout<<"Khan";
	
	fac(5);
	a= fac(5);
	cout<<a;
	return 0;
}
