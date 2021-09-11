#include<iostream>
using namespace std;
int adding(int a, int b)
{
	int z= a +b;
	return z;
}
#define khan
#ifdef khan
void multiplycation(int c , int d)
{
	int G; G= c*d;
	cout<<G;
}
#endif

int main()
{
	cout<<adding(4,5)<<endl;
	#ifdef khan
	multiplycation(2,3);
	#endif
	return 0;
}
