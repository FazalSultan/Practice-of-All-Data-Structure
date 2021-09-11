#include<iostream>
using namespace std;
int main()
{
	int *a=new int;
	cout<<"Enter Your Number: ";
	cin>>*a;
	cout<<"Value of a: "<<*a<<endl;
	cout<<"Address of Pointer: "<<&a<<endl;
	cout<<"Address of Dynamic variable: "<<a<<endl;
	delete a;
	//cout<<*a; just for cheaking
	return 0;
}
