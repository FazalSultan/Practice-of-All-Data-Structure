#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <class T>
T maxii( T val1, T val2)
{
	if(val1 < val2)
	{
		cout<<"Val1 Is Smaller: "<<val1;
	}
	else
	{
		cout<<"Val2 Is greater: "<<val2<<endl;
	}
}

int main()
{
	maxii<string>("bbb","bba");
	return 0;
}

