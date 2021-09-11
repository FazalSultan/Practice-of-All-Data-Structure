#include<iostream>
using namespace std;
int Multiply_without_multiplycation(int a , int b)
{
	if(a == 0 || b == 0)		//bcoz anything multiply by 0 is 0;
	{
		return 0;
	}
	else
	{
		return  b+ Multiply_without_multiplycation(a-1,b);
		 
	}
}
int main()
{
	int CH;
	CH=Multiply_without_multiplycation( 5,0 );
	cout<<"Finally Your Multiplycation is: "<<CH;
	return 0;
}
