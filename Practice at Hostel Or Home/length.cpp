#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length_strg()
{

	int count=0;
	string a="I am Khan";
	int g=a.length();
	cout<<g;
	string *p;
	p=NULL;
//	p=a;
//	for(int i=0 ; i)
	if(p!='\0')
	{
		count++;
		p++;
		length_strg();
	}
	cout<<count;
}

int main()
{
	length_strg();
	return 0;
}
