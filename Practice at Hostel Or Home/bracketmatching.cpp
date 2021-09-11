#include<iostream>
using namespace std;
class Stack{
	public:
		int top;
		int *array;
		int size;
		Stack()
		{
			top=-1;
			size=20;
			array=new int[size];
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
	
	bool is_Full()
	{
		if(top ==(size-1))
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
	
	void Bracket_matching(string Expression)
	{
		int opening_bracket=0;
		for(int i=0 ; i<Expression.length(); i++)
		{
			if(Expression[i]=='('|| Expression[i]=='{'  || Expression[i]=='[')
			{
				opening_bracket++;
				push(Expression[i]);
			}
		}
		int closing_bracket=0;
		for(int j= 0 ; j<Expression.length(); j++)
		{
			if(Expression[j]==')' || Expression[j]=='}' || Expression[j]==']')
			{
				closing_bracket++;
				char d= pop();
				cout<< d<<" "<<Expression[j]<<endl;
			}
		}
		if(opening_bracket == closing_bracket )
			{
				cout<<"Expression is correct"<<endl;
			}
			else
			{
				 cout<<"incorrect Expression"<<endl;
			}
	}
};
int main()
{
	Stack s1;
	s1.Bracket_matching("(45+{[25/5]}+5)");
	
//	s1.Top();
//	cout<<s1.is_Empty();
	return 0;
}
