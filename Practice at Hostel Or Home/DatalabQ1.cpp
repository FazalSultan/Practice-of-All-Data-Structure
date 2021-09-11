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
        node *tail;
        int length;
        singly_circular_linklist()
        {
            head=NULL;
            current=NULL;
            length=0;
            tail = NULL;
        }
        
    void insert(int value)
    {
        if(head == NULL)
        {
            head=new node;
            head->val=value;
            head->next=head;
            tail = head;
            length++;
        }
        else
        {

            node *temp1 = new node;
            temp1->val = value;

            if( head!= NULL)
            {
                if(value >= tail->val)      // if value greater than or equal to tail node then ,insert  after last node ,i.e after tail
                {
                    tail->next = temp1;
                    tail = tail->next;
                    tail->next = head;
                    length++;
                    return;
                }
                if (value <= head->val)  // if value smaller than or equal to head node then ,insert before head 
                {
                    temp1->next = head;
                    head = temp1;
                    tail->next = head;
                    length++;
                    return;

                }          
                // Now finding place to insert in the mid
                node* increment = head;
                while(increment->val < value)
                {
                    increment = increment->next;        // now the place is found to where the node souul be inserted

                }
                temp1->next = increment->next;         // insert value
                increment->next = temp1;
                length++;
                return;           


            }
            //if(head->val < )
        }
    }
    
    void print_thelink_list()
    {
        cout << "current is " << head->val << endl; 
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
    s1.insert(4);
    s1.insert(12);
    s1.insert(6);
    s1.print_thelink_list();
    return 0;
}
