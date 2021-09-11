#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
	public:
		int *array;
		int size;
		int no_ofelements;
		int front;
		int rear;
		Queue()
		{
			size=6;
			array=new int[size];
			no_ofelements = 0;
			front = 0;
			rear= -1;
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
	
	bool is_Full()
	{
		if(no_ofelements == size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void enqueue(int val)
	{
		if(is_Full())
		{
			cout<<"Queue is Full Therefore We Can't Enqueue: "<<endl;
			return;
		}
		else
		{
			if(rear == (size -1))
			{
				rear=0;
			}
			int a=array[++rear]=val;
			no_ofelements++;
			cout <<a<<endl;
		}
	}
	
	int dequeue()
	{
		if(is_Empty())
		{
			cout<<"Queue is Empty Therefore We Can't Dequeue: "<<endl;
		}
		else
		{
			if(front == (size -1))
			{
				front =0;
			}
			int E= array[front++];
			cout<< "Front ka Value: "<<E<<endl;
			no_ofelements--;
		}
	}
	
};
int main()
{
	Queue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);

	q1.dequeue();
	q1.dequeue();
	q1.dequeue();
	q1.dequeue();
	return 0;
}
