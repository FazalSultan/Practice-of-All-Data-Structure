#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
	public:
		int *array;
		int top;
		int size;
		int no_ofelements;
		string str;
		
		Stack()
		{
			size= 10;
			top =-1;
			no_ofelements= 0;
			array=new int[size];
		}
		
	bool is_Full()
	{
		if(top == (size-1))
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
		if(no_ofelements == 0)
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
		//int temp;
		if(is_Full())
		{
			cout<<"Stack Is Overflow: ";
		}
		else
		{
			array[++top]=val;
			no_ofelements++;
//			temp=val;
//			cout<<"Your Top is : "<<temp<<endl;
			return;
		}
	}
	
	int pop()
	{
		int val;
		if(is_Empty())
		{
			cout<<"Stack is Underflow: ";
		}
		else
		{
			val=array[top--];
			no_ofelements--;
			cout<<"You Poped the elemet: "<<val<<endl;
		}
	}
	
	int Evalpostfix(string expresion)
	{
		char save_operator;
		int result;
		int operand1;
		int operand2;
//		for(int i= 0 ; i < expresion.length(); i++)
//		{
//			if(expresion[i] >=0  && expresion[i] <=9)
//			{
//				push(expresion[i]);
//			}
//		}
		
		for(int i= 0; i< expresion.length(); i++)
		{
			if(expresion[i]=='+' || expresion[i]=='-' || expresion[i]=='*' || expresion[i]=='/' || expresion[i]=='^')
			{
				//operand = (operand*10) + (expression[i] - '0');
				save_operator=expresion[i];
				if   (save_operator == '+')
				{
					operand2=char(pop());
					operand1=char(pop());
					result= operand2+operand1;
				//	push(result);	
				}
				else if(save_operator == '-')
				{
					operand2=pop();
					operand1=pop();
					result= operand2-operand1;
					//push(result);	
				}
				else if(save_operator == '*')
				{
					operand2=pop();
					operand1=pop();
					result= operand2*operand1;
					//push(result);	
				}
				else if(save_operator == '/')
				{
					operand2=pop();
					operand1=pop();
					result= operand2/operand1;
				//	push(result);	
				}
				else if(save_operator == '^')
				{
					operand2=pop();
					operand1=pop();
					result= operand2 ^ operand1;
				//	push(result);
				}
				else
				{
					cout<<"Unexpected Error: "<<endl;
				}
			}
			else
			{
				push(char(expresion[i]));
			}
		}
		cout<<"Your Result Is: "<<result;
	}
};
int main()
{
	Stack  s1;
	//s1.temp();
	//cout<< s1.is_Empty();
	//cout<< s1.is_Full();
//	s1.push(1);
//	s1.push(2);
//	s1.push(8);
//	
//	s1.pop();
//	s1.pop();
//	s1.pop();
//	s1.pop();
	
	s1.Evalpostfix("45+");
	return 0;
}
