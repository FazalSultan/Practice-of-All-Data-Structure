#include<iostream>
using namespace std;
int josephus()
{
	int array[]={1,2,3,4,5,6,7,8,9,10};
	int size=0; int top=0;
	int *temp=NULL;int *temp2=NULL; 
	size= sizeof(array)/sizeof(array[0]);
	cout<<"Your Size is: "<<size<<endl;
	for(top = 0; top<= size ; top++)
	{
		
		if(size == 1)
		{
			return size;
		}
		if(top ==(size))
		{
			top=0;
		}
		else
		{
			cout<<"khan";
			cout<<array[top]<<" ";
			temp++;
		//	return array[top];
		}
	}
}
int main()
{
	josephus();
	return 0;
}
