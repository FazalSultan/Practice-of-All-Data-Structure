#include<iostream>
#include<string>
using  namespace std;

class list{
private:
	int *arr; //will be used to initialize an empty list and will always point to the first position.
	int size; //total capcity of the list
    int len; //number of current elements in the list
    int *current; //pointer to point the current position
    int *temp; //can be used for temporary works
public:

    //Constructor for initializing List
    //You can initialize size to any value
	list(){
	    len=0;
	    size=0;
	    current=NULL;
	    temp=NULL;
	    cout<<"Enter Your Size: ";
	    cin>>size;
	    cout<<"Enter Your length: ";
	    cin >>len;
	    arr=new int[size];
	    for(int i=0 ; i< len ; i++)
	    {
	    	cin>>*(arr+i);
		}
	}
	
	void print_the_list()
	{
		cout<<"Your List is: ";
		cout <<"[";
		for(int i=0  ;i< len ; i++)
		{
			cout<<*(arr+i)<<" ";
		}
		cout<<"]"<<endl;
	}


    //overloaded constructor
    //user will pass decided the size of the list
//    list(int userSize)
//    {
//    	userSize=10;
//	}
//
//    //Deep Copy Constructor
//    //write code to create a new list and copy elements of the list passed in the parameter
//	list(list& l2)
//	{
//		
//	}
//	
//

    //Clear Or Empty the List
	void clear()
	{
		temp=arr;
		delete []arr;
		len=0;
	}


    //Insert a Value at Specific Position
	void insert(int Value,int position)
	{
		temp=arr;
		for(int i = 0; i <len ; i++)
		{
			if(i == position)
			{
				*temp=Value;
				print_the_list();
			}
			temp++;
		}
	}

    //Insert the given value in the list at the next available position
    void insert(int value)
    {
    	temp=NULL;
    	temp=arr;
    	if (len < size)
    	{
    		cout<<"We Can Append The Value,bcoz list is still not Full: "<<endl;
    		for(int i =1; i <len ; i++)
    		{
    			temp++;
			}
			*temp= value;
			print_the_list();
			return;	
		}
			cout<<"List Is Full ,Therefore We Can't Append The Given Value: ";
	}
    //Remove a value at specific position
	void remove(int pos)
	{
		temp=NULL;
		temp=arr;
		current=NULL;
		current=arr;
		if (pos > len)
		{
			cout<<"Out Of Index: "<<endl;
			return;
		}
		for(int i =0; i< len ; i++)
		{
			current++;
			temp++;
			if(i == pos)
			{
				while(i < len)
				{
					current+=1;
					*temp=*current;
					temp++;
					i++;
				}
				len--;
			}
		}
		print_the_list();
		length();
	}



    //Get value stored at a specific position
	int get(int pos)
	{
		temp=arr;
		if (len > size )
		{
			cout <<" Length Can't be Greater Than Size"<<endl;
		}
		for(int i= 0; i < len ; i++)
		{	
			if(i== pos )
			{
				cout<<"The Value is At Given Position Is : ";
				return *temp;
			}
			else
			{
				temp++;
			}	
		}
	}

    //Update Existing value at a position
	void update(int val,int pos)
	{
		temp=arr;
		for(int i=0 ; i < len; i++)
		{
			if(i == pos)
			{
				*temp=val;
				print_the_list();
				//return;
			}
			temp++;
		}	
	}


    //Find a value in the list
	void find(int value)
	{
		temp=arr;		//Now the temp pointed to the top of the array ;
		for(int i=0;  i<len ; i++)
		{
			if(*temp==value)
			{
				cout<<"Value Found: "<<*temp<<" "<<endl;
				return;
			}
				temp++;
		}
			if(*temp!=value)
			{
				for(int i=0; i<len ;i++)
				{
					temp++;
				}
				cout<<"Value Not Found: "<<endl;
			}
	}


    //Return Current Length of the list
	int length()
	{
		cout<<"Your Length is: "<<len;
	}


    //Move to starting position of the list
	int  start()
	{
		current=arr;
		cout<<"Now The Current pointer pointing To Top Of Array: "<<*current<<endl;
	}

    //Move to the end of the list
	void end()
	{
			temp=NULL;
			temp=arr;
			for(int i=1; i < len ; i++)
			{
				temp++;
			}
			cout<<"Now The Temp pointer pointing to the last element: "<<*temp<<endl;
			temp=arr;
	}
    

    //checks whehter the list is completely filled or not
    bool isFull()
    {
    	if(len == size)
    	{
    		cout<<"1 Means True(For is_Full Function): ";
			cout<<true<<endl;

		}
		else
		{
			cout<<"0 means False(For is_Full Function): ";
			cout<<false<<endl;
		}
	}
    
    //checks whehter the list is completely empty or not    
    bool isEmpty()
    {
    	if(len == 0 )
    	{
    		cout<<"1 Means True(For is_Empty Function): ";
			cout<<true<<endl;
		}
		else
		{
			cout<<"0 means False(For is_Empty Function): ";
			cout<<false<<endl;
		}
	}

};

int  main()
{
	list l1 ;
	//l1=l2;
//	l1.print_the_list();
//	cout<<l1.get(2)<<endl;
//	l1.start();
//	l1.end();
//	l1.isFull();
//	l1.isEmpty();
//	l1.length();
//	l1.find(10);
//	l1.update(2,2);
// 	l1.clear();
//	l1.insert(100,5);
//	l1.insert(200);
	l1.remove(2);

//	system("pause");
	return 0;
}	  
