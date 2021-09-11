#include<iostream>
using namespace std;
int main()
{
	int arr[15]={14,15,4,9,7,18,3,5,16,4,20,17,9,14,5};
	for(int i=0 ;i <15 ; i++)
	{
		for(int j=0 ; j< 15 ; j++)
		{
			if(arr[j]==arr[i])
			{
				cout<<"The Same Value is: "<<"("<<arr[i]<<")"<<endl;
			}
		}
	}
	return 0;
}
