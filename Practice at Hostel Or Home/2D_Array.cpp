#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class khan
{
	public:
		int rows,coloums;
		int cheaking_No_of_Rowscolums()
	{
		cout<<"Enter Your No Rows: ";
		cin>>rows;
		cout<<"Enter Your Coloums: ";
		cin>>coloums;
		if(rows== 2 && coloums==2)
		{
			cout<<"\t\tNote: P L E A S E Enter the Elements in R O W W I S E: \n";
			cout<<"\t\tNow Enter The Elements To Fill The Matrix: \n\n";
		 array_2D();
		}
		if(rows < 2 || coloums < 2)
		{
			cout<<"We can't Find the Determinet:"<<endl;
		}
		if(rows> 2 || coloums> 2)
		{
			cout<<"\t\tNote: P l E A S E Enter the Elements in R O W W I S E: \n";
			cout<<"\t\tNow Enter The Elements To Fill The Matrix: \n\n";
			matrix_3_by_3();	
		}
	}
	int array_2D()
	{
		int array[rows][coloums];
		for(int i=0; i<rows ; i++)
		{
			for (int j=0 ; j< coloums ; j++)
			{
				cin>>array[i][j];
			}
		}
		for(int i=0; i<rows ; i++)
		{
			for (int j=0 ; j< coloums ; j++)
			{
				cout<<array[i][j]<<" ";
			}
			cout<<endl;
		}
		int d= (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);
		cout<<"The determinent is: "<<d;	
	}
	int matrix_3_by_3()
	{
		int array1[rows][coloums];
		for(int i=0; i<rows ; i++)
		{
			for (int j=0 ; j< coloums ; j++)
			{
				cin>>array1[i][j];
			}
		}
		for(int i=0; i<rows ; i++)
		{
			for (int j=0 ; j< coloums ; j++)
			{
				cout<<array1[i][j]<<" ";
			}
			cout<<endl;
		}
		string choice;
		cout<<"Enter Your Choice to Expand: i.e(R1,C1)\n";
		cin>>choice;
		if(choice =="R1" ||choice =="r1")
		{
			cout<<"Khan";
		}
	}

		
};

int main()
{
	khan k1;
	k1.cheaking_No_of_Rowscolums();
	return 0;
}
