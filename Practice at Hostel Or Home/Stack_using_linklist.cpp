#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int val;
		node *next;
};

class Stack{
	public:
		node *top;
		int length;
		
		Stack()
		{
			top=NULL;
			length= 0;
		}
		
	void push(int val)
	{
		if(top== NULL)
		{
			top=new node;
			top->val= val;
			top->next=NULL;
			length++;
			return;
		}
		else
		{
			node *temp= new node;
			temp->val=val;
			temp->next=top;
			top=temp;
			length++;
			return;
		}
	}
	
	int pop()
	{
		if(is_Empty())
		{
			cout<<"The Stack is On Underflow Condition Therefore we can't P O P the Value: "<<endl;
		}
		else
		{
			node *temp2=top;
			top=top->next;
			delete temp2;
			temp2=NULL;
			
		}
	}
	
	bool is_Empty()
	{
		if(top == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	int Top()
	{
		if(top == NULL)
		{
			cout<<"Top is Now Not pointing To any value: "<<endl;
		//	int top = -1;
		//	this->top->val=top;
			return 0;
		}
		else
		{
			return top->val;	
		}
	}
};
int main()
{
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	
//	cout<<"Top Ka Value: "<<s1.Top()<<endl;
//	cout<<"To Cheack Is Empty Or Not: "<<s1.is_Empty()<<endl;
	
//	s1.pop();
//	s1.pop();
//	s1.pop();
//	s1.pop();
	cout<<"Top Ka Value: "<<s1.Top()<<endl;
	
	return 0;
}
