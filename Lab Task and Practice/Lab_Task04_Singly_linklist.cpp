#include<iostream>
using namespace std;
class node{
	public:
	int val;
	node *next;
	node()
	{
		next=NULL;
	}
		
};

class singly_linklist{
	private: 
	node *head;
	node *current , *temp1;
	int length;
	
	public:
	singly_linklist()
	{
		head=NULL;
		current=NULL;
		temp1=NULL;
		length= 0;
	}
	int insert_byvalue(int data)
	{
		if(head == NULL)
		{
			head=new node;
			head->val=data;
			head->next=NULL;
			current=head;
			length++;
		}	
		else
		{
			node *n=new node;
			n->val=data;
			n->next=NULL;
			current->next=n;
			current=current->next;
			length++;
		}	
	}	
	
	void print_thelist()
	{
		cout<<"The List Is: ";
		cout<<"[";
		current=head;
		while(current!=NULL)
		{
			cout<<current->val<<" ";
			current= current->next;
		}
		cout<<"]"<<endl;
	}
	void insert_by_position_and_value(int value , int position)
	{   
		node *temp= new node;   
		if(position == 0 && head == NULL)
		{
				head=new node;
				head->val=value;
				head->next=NULL;
				current=head;
				length++;
		} 
		else
		{
			if (position == 0 && head != NULL)
			{
				node *n=new node;
				n->val=value;
				n->next=head;
			//	head->next=NULL;
				head=n;
				length ++;		
			}
		}
		if(position !=0  && head !=NULL)
		{
			current=head;
			for(int i=0;  i<(position -1) ; i++)
			{
				current = current -> next;
			}
			temp->val = value;
			temp->next = current->next;
			current->next = temp;
			length++;
			print_thelist();
			return;
		}
		if(position < length)
		{
			cout<<"we Can Add The Value at the Given Positioin: "<<endl;
		}
		else
		{
			cout<<"Out Of Index: "<<endl;
		}
	}
	int length_oflink_list()
	{
		cout<<"The Length is: "<<length<<endl;
	}
	
	void search_inlist_byvalue(int value)
	{
		current=head;
		for(int i =0 ; i<length; i++)
		{
			if(current->val== value)
			{
				cout<<"Value Found: "<<current->val;
				return;
			}
			current=current->next;
		}
			cout<<"Value Not Found: "<<endl;
	}
	void delete_byvalue(int value)
	{
		current=head;
		temp1=head;
		if(head->val== value && head == NULL)
		{
			delete current;
			current =NULL;
			length--;
			length_oflink_list();
			print_thelist();
			return;
		}
		if( head->val== value && head!= NULL)
		{
			head=head->next;
			delete current;
			current=NULL;
			length--;
			length_oflink_list();
			print_thelist();
			return;
		}
		for(int i= 0 ; i< length ; i++)
        {
            if(temp1->next->val == value)
            {
                temp1=temp1->next;
                current->next=temp1->next;
                delete temp1;
                temp1=NULL;
                length--;
                length_oflink_list();
                print_thelist();
                return;
            }
            current=current->next;
            temp1=temp1->next;
        }
            
	}
};
int main()
{
	singly_linklist l1;
	l1.insert_byvalue(1);
	l1.insert_byvalue(2);
	l1.insert_byvalue(3);
	l1.insert_byvalue(4);
	l1.insert_byvalue(5);
//	l1.insert_by_position_and_value(20,4);
//	l1.length_oflink_list();
//	l1.search_inlist_byvalue(5);
	l1.delete_byvalue(5);
	return 0;
}
