#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a,b;
	char *ptrA=NULL;
	char *ptrB=NULL;
	cout<<"Enter Your Chracter For A: ";
	cin>>a;
	cout<<"Enter Your Chracter For B: ";
	cin>>b;
	ptrA=&a;
	cout<<"Address of A: "<<(void*)ptrA<<endl;
	ptrB=&b;
	cout<<"Address of B: "<<(void*)ptrB<<endl;
	*ptrA=a;
	cout<<"Value of A: "<<*ptrA<<endl;
	*ptrB=b;
	cout<<"Value of B: "<<*ptrB<<endl;
	cout<<"Address of PtrA: "<<&ptrA<<endl;
	cout<<"Address of PtrB: "<<&ptrB<<endl;
	return 0;
}
