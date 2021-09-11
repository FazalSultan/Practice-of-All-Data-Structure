#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
	public:
		int top;
		int rear;
		int size;
		int *array;
		int no_ofelements;
	Queue()
	{
		top= -1;
		rear= 0;
		size= 5;
		no_ofelements=0;
		array= new int[size];
		
	}
	
	bool is_Empty()
	{
		if(no_ofelements == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	bool is_full()
	{
		if(no_ofelements == (size-1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	return 0;
}
