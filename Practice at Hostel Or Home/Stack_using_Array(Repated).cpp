#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack1{
	private:
		int top;
		int size;
		int *array;
	public:
		stack1()
		{
			top= -1;
			size = 5;
			array=new int[size];	
		}	
	
	bool is_Full()
	{
		if(top ==(size -1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	bool is_Empty()
	{
		if(top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void push(int val)
	{
		if(is_Full())
		{
			cout<<"We can't PUSH Bcoz Stack Is Full:";
		}
		else
		{
			 array[++top]=val;	
			 return;
		}
	}
	
	int pop()
	{
		if(is_Empty())
		{
			cout<<"We can't POP Bcoz Stack Is Empty:";	
		}
		else
		{
			return array[top--];
		}
	}
};

int main()
{
	Stack1 s11;
	return 0;	
}
