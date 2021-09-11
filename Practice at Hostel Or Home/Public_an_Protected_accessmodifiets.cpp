#include<iostream>
using namespace std;
class A{
	private:
		int A1;
	public:
		int A2;
		friend void add(A a1);	
	protected:
		int A3;
};
	void add(A a1)
	{
		int temp;
		a1.A1= 5;
		cout<<a1.A1 +7<<endl;
		temp=a1.A1;
		a1.A3= 12;
		cout<<a1.A3<<endl;
		int result;
		result=temp+a1.A3;
		cout<<"Result is : "<<result;
	} 
	

class B: public A{
	private:
		int B1;
	public:
		int B2;
		friend void minus(B b1);
	protected:
		int B3;
		
};
	void minus( B b1)
	{
		b1.A2= 10;
		cout<<"Derived"<<b1.A2<<endl;
	}
int main()
{
	A a1;
	B b1;
	b1.A2=5;
	cout<<"from main"<<b1.A2<<endl;
//	add(a1);
//	b1.B2;
	minus(b1);
	return 0;
}
