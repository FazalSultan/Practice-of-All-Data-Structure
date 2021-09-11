#include<iostream>
using namespace std;
class node{
    public:
        int val;
        node *next;
};

class singly_circular_linklist{
    public:
        node *head;
        node *current;
        int length;
        singly_circular_linklist()
        {
            head=NULL;
            current=NULL;
            length=0;
        }
        
    void insert(int value)
    {
        if(head == NULL)
        {
            head=new node;
            head->val=value;
            head->next=head;
            current=head;
            length++;
        }
        else
        {
            if( head!= NULL)
            {
                if(head->val <= value)
                {
                    node *temp1=new node;
                    temp1->val=value;
                    current->next=temp1;
                    current=current->next;
                    temp1->next=head;
                    length++;
                }
                else
                {
                    node *temp=new node;
                    temp->val=value;
                    temp->next=head;
                    current->next=temp;
                    current=current->next;
                    head=current;
                    length++;
                }
            }
            //if(head->val < )
        }
    }
    
    void print_thelink_list()
    {
        current=head;
        for(int i= 0; i < length ; i++)
        {
            cout<<current->val<<" ";
            current=current->next;
        }
    }
};

int main()
{
    singly_circular_linklist s1;
    s1.insert(17);
    s1.insert(18);
    s1.insert(4);
    s1.insert(3);
//   	s1.insert(4);
//    s1.insert(5);
    s1.print_thelink_list();
    return 0;
}
