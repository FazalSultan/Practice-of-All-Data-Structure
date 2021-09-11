#include<iostream>
#include<string>
using namespace std;
int main()
{
	int size;
	char *p=NULL;
	cout<<"Enter Your Size for Array: ";
	cin>>size;
	char *array=new char[size];
	//array=p;
	p=array;
	char d;
	for(int i=0 ;i<size; i++)
	{
		
		cin>>d;
		*(array + i) = d; 
		p++;	
	}
	for(int i=0; i<size; i++)
	{
		cout<<*(array + i)<<" ";
		p++;
	}
	
	return 0;
}
