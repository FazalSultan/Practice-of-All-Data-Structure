# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class khan{
	public:
		static int val;					// decaration of static variable
		static  int addition();
		
};
int khan:: val =0;     				// we initalize static variable and  define function  here with no static keyword.
int khan::addition()
	{
		int a =5 , b= 55 ;
		val= a +b;
		cout<<"Your Result is: ";
		return val; 
	}										
int main()
{
	khan k1;
	cout<<khan::addition();			//Access with class Name and Scope Resolution operator(::).
	return 0;
}
