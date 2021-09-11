#include<iostream>
using namespace std;
int ascii ()
{

	for(int i=65; i<=90; i++)
	{
		cout<< "Alphabets is: "<<char (i)<<endl;
		cout<<"Ascii vlue is: "<<(i)<<endl<<endl;
		cout<<"----------------**********--------------********-----------"<<endl ;
	}
//}
//void D2_array()
//{
//	int array[2][2];
//	int val;
//	for(int i =0 ; i< 2 ;i++)
//	{
//		for(int j=0 ; j<2 ; j++)
//		{
//			array[i][j]=val ;
//			if(array[1][1]==5)
//			{
//				array[i][j]=0;
//				//cout<<array[i][j];
//			}
//			val+=1;
//			cout<<array[i][j]<<" ";
//		}
//		cout<<endl;
//		
//	}
//		int d= (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);
//		cout<<"The determinent is: "<<d;
//	cout<<array[1][2];
}
//	int f(int x, int *py ,int **ppz)
//	{
//		int y,z;
//		**ppz+=1;z=**ppz;
//		*py+=2; y=*py;
//		x+=3;
//		cout<< x+y+z;
//	}
int main()
{
	 ascii();
//	 D2_array();
//	 int c,*b,**a;
//	 c=4; b=&c; a=&b;
//	 f(c, b,a); 
	 return 0;
}

