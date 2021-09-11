#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int val;
		node *next;
		node *previous;
	
	node()
	{
		val = 0;
		next=NULL;
		previous= NULL;
	}
};

class Doubly_linklist{
	public:
		node *head;
		node *current;
		int length;
		
	Doubly_linklist()
		{
			head=NULL;
			current=NULL;
			length=0;
		}
	int insert_node(int value)
	{
		if(head==NULL)
		{
			head=new node;
			head->val= value;
			head->next=NULL;
			head->previous=NULL;
			current=head;
			length++;
		}
		else
		{
			node *temp=new node;
			temp->val=value;
			temp->next=NULL;
			current->next=temp;
			temp->previous=current;
			current=current->next;
			length++;
		}
	}
		
	void print_thelist()
	{
		cout<<"Your List Is: "<<"[";
		current=head;
		while(current!=NULL)
		{
			cout<<current->val<<" ";
			current=current->next;
		}
		cout<<"]"<<endl;
		
		current=head;
	}
	
	void update_byvalue(int replacing_value , int replaced_bythis_value)
	{
		current=head;
		for(int i=0 ; i< length ; i++)
		{
			if(current->val == replacing_value)
			{
				current->val=replaced_bythis_value;
				print_thelist();
				return;	
			}
			current=current->next;
		}
	}
	void delete_byvalue(int value)
	{
		current=head;
		node* temp1=NULL;
		temp1=head;
		node *temp2=NULL;
		temp2=head;
		for(int i=0 ;i < length ; i++)
		{
			if(current->val!= value)
			{
				cout<<"value Not Found: "<<endl;
				return;
			}
			if(head->val== value)								// First Node Deletion
			{
				head=head->next;
				delete current;
				current =NULL;
				print_thelist();
				length_ofthe_linklist();
				return;
			}
			if(current->val == value && current->next==NULL)     // Last Node deletion....
			{
				current->previous->next=NULL;
				delete current;
				current=NULL;
				length--;
				print_thelist();
				length_ofthe_linklist();
				return;
			}
			
			if(current->next->val== value && current->next->next!=NULL)		// Anywhere in The Midlle....
			{
				temp1=temp1->next;
				temp2=temp1->next;
				current->next=temp1->next;
				temp1->next=NULL;
				temp1->previous=NULL;
				delete temp1;
				temp1=NULL;
				temp2->previous=current;
				length--;
				print_thelist();
				length_ofthe_linklist();
				return;
			}
			current=current->next;
			temp1=temp1->next;
		}
		current=head;
	}
	
	void length_ofthe_linklist()
	{
		cout<<"The Length Of the List is: "<< length<<endl;
	}
	
	void insert_byposition(int position , int value)
	{
	//	current=head;
		if (position > length)
		{
			cout<<"Out Of Index: "<<endl;
			return;
		}
		if(head == NULL && position == 0 )
		{
			head= new node;
			head->val= value;
			head->next=NULL;
			head->previous=NULL;
			current=head;
			length++;
			print_thelist();
			length_ofthe_linklist();
			return;
		}
		if(position == 0 && head!= NULL)
		{
			node *temp3=new node;
			temp3->val=value;
			temp3->previous=NULL;
			temp3->next=head;
			head=temp3;
			length++;
			print_thelist();
			length_ofthe_linklist();
			return;
		}
		if(position !=0 && head!= NULL)
		{
			current=head;
			for(int i =1; i< length ; i++)
			{
				if(i == position)
				{
					node *temp4=new node;
					temp4->val=value;
					temp4->next=current->next;
					temp4->previous=current;
					current->next->previous=temp4;
					current->next=temp4;
					length++;
					print_thelist();
					length_ofthe_linklist();
					return;
				}
				current=current->next;
			}
		}
	}
};


int main()
{
	Doubly_linklist l1;
	for(int i =1 ; i< 8; i++)
	{
		l1.insert_node(i);
	}
	l1.print_thelist();
	l1.length_ofthe_linklist();
//	l1.update_byvalue(5,100);
//	l1.delete_byvalue(9);
	l1.insert_byposition(6,45);
	
	
	return 0;
}
