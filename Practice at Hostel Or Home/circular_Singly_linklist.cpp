#include<iostream>
using namespace std;
class node{
	public:
		int val;
		node *next;
};
class circular_Singly_linklist{
	public:
		node *head;
		node *current;
		int length;
		circular_Singly_linklist()
		{
			head=NULL;
			current=NULL;
			length = 0;
		}
		
	void insert_node(int val)
	{
		if(head == NULL)
		{
			head= new node;
			head->val= val;
			head->next= head;
			current= head;
			length++;
			return;
		}
		else
		{
			node *temp= new node;
			temp->val= val;
			temp->next=head;
			current->next=temp;
			current= current->next;
			length++;
			return;
		}
		current= head;
	}
	
	void print()
	{
		cout<<"Your list is: "<<"[";
		current= head;
		for(int i= 0  ; i < length ; i++)
		{
			cout<<current->val<<" ";
			current= current->next;
		}
		cout<<"]"<<endl;
	}
	
	int josephus()
	{
		int value;
		node *temp1=head->next;
		current= head;
		while(head->next != head)
		{
			for(int i = 1; i< 3 ; i++)
			{
				current= current->next;
				temp1=temp1->next;
			}
			current->next=temp1->next;
			
			if(temp1== head)
			{
				head= head->next;
			}
			value = temp1->val;
			delete temp1;
			current= current->next;
			temp1=current->next;
			cout<<"("<<value<<" out)"<<" ";
		}
		cout<<endl;
		return head->val;
			
	}
		
		
};
int main()
{
	circular_Singly_linklist c1;
	for(int i = 1 ;i <=10; i++) 
	{
		c1.insert_node(i);
	}
	c1.print();
	cout<<"Leader is: "<<c1.josephus();
}
