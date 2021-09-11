#include<iostream>
#include<string>
using namespace std;
class array_based_list
{
		private:
		int size;	//		Total Size of the List /Array;
		int length;	//		Number of elements In the list;
		int *current;
		int *temp;
		int *array;
		
		public:
		array_based_list()
		{
			size=5; // To Avoid from Garbage value
			length=4;
			current=NULL;
			temp=NULL;
			array= new int[size];
		}
			
		void print_the_list()
		{
			//cout<<"Enter Your Length: ";
			//cin>>length;
			temp=array;
			for(int i=0 ; i <length ;i++)
			{
			 cin>>*(array+i);
			 temp++;	
			}
			temp=array;
			cout<<"This is the List: ";
			for(int i= 0; i< length ; i++)
			{
				cout<<*(array+i)<<" ";
				temp++;
			}
			cout<<endl;
		}
		
	int tail_OR_end()
		{
			current=NULL;
			current=array;
			for(int i=0; i < length ; i++)
			{
				current++;
			}
			cout<<"Now The Current pointer pointed to the last element: "<<*current<<endl;
			current=array;		// bcoz to stand again the current pointer to the top of the array;
		}
};
int main()
{
	array_based_list l1;
	l1.print_the_list();
	l1.tail_OR_end();
	return 0;
}
