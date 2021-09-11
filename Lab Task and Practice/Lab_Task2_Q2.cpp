#include<iostream>
using namespace std;
int Sum_Natural_Number(int val)
{
	if(val == 1)
	{
		return 1;
	}
	else
	{
		return (val) + Sum_Natural_Number(val -1);
	}
}
int main()
{
	int Number;
	int a;
	cout<<"Enter Your Number To Find The Sum: ";
	cin>>Number;
	a=Sum_Natural_Number(Number);
	cout<<a;
	
	return 0;
}

