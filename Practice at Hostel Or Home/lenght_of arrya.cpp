#include<iostream>
using namespace std;
int main()
{
	// lenght of chracter array;
//	char array[]={'1','2','3', '4' ,'5'};
//	int a= sizeof(array)/sizeof(array[0]);
//	cout<<a;
	
	//-----------------------------------**************************----------------------------*************-------------
	
	// length of int Array;
	int arr[]={1,3,4,5,6,45};
	int a= sizeof(arr);cout<<a<<endl;
	//*************-----------------------**********************----------------------------********************--------	
	char aa='Z';
	int b= int(aa);cout<<"Ascii Value is: "<<b<<endl;
	
	//---------------*************************---------------------**********************---------------------***********
	int bb= 65;
	char cc=(bb);cout<<"Your Alphabet is: "<<(cc)<<endl;
	
	//******************-----------------------**************-----------------------**************--------------------***
	 int var= 4; int qw =sizeof(var);cout<<"The Size Of int Is: "<<var<<endl;
	 char var1='1'; int d2= sizeof(var1);cout<<"The Size of Char is: "<<d2<<endl;
	return 0;
	
}
