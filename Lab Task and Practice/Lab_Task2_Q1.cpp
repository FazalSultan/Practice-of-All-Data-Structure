#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length()
{
	char *a;
	int count=0;
	a="i am khan";
	string *p;
	p=&a;
	cout<<*p;
	if(p !='\0')
	{
		count++;
		p++;
		length();
	}
	cout<<"Nothing is in the input";
}
int main()
{
	length();
	return 0;
}
