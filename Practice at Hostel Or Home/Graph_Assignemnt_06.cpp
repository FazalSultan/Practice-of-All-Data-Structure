#include<iostream>
#include<bits/stdc++.h>
#define SIZE 6
using namespace std;

class Node{
public:
	int val ;
	Node* next;  
};


class Linkedlist{
	Node* head ;
	Node* current;
	int length;
	public:
		Linkedlist();
		void insert(int val);
		void printlist();
		bool isPresent(int node);
		int get_length(){
			return length;
		}
};

Linkedlist::Linkedlist()
{
	head = NULL;
	current = NULL;
	length = 0;
}
bool Linkedlist::isPresent(int node)
{
	Node* f = head;
	while(f != NULL)
	{
		if (f->val == node)return true;
		f = f->next;
		
	}
	return false;
}
void Linkedlist::insert(int val)
		{
			
			if (head == NULL )
			{
				head = new Node;
				head->val = val;
				head->next = NULL;
				current  = head;
				length++;
			}
			else
			{
				Node *n = new Node;
				n->val = val;
				n->next = NULL;
				current->next = n;
				current  = current->next;
				length++;

			}
        }


void Linkedlist::printlist(){
	current = head;
	cout << "[ ";
	while(current  != NULL){
		cout << current->val << " ";
		current = current->next;

	}
	cout << " ]";

}

struct node_edge
{
	int node;
	Linkedlist edge;	
};

class Graph{
	public:
		Node *As_root;
		int *vertex;
		node_edge ne[SIZE];
		int size;
		int temp_variable;
		
	Graph(){
		As_root = NULL;
		temp_variable = -1;
		vertex = new int[size];
	}
	int Add_vertex(int val)
	{
		ne[++temp_variable].node= val;
	}
	int find_in_degree(int node)
	{
		int inc = 0;
		for(int i = 0 ; i< SIZE; i++)
		{
			if(ne[i].edge.isPresent(node))
			{
				inc++;
			}
		}
		return inc;
	}
	int find_out_degree(int node)
	{
		for(int i = 0 ; i< SIZE; i++)
		{
			if(ne[i].node == node)return ne[i].edge.get_length();		
		}
		
	}
	void show_vertex()
	{
		
		for(int i = 0; i < SIZE; i++)
		{
			cout << ne[i].node << " ";
		}
		cout << endl;
	}
	void addEdge(int src, int dest)
	{
		for(int i = 0 ; i< SIZE ; i++)
		{
			if (src == ne[i].node)
			{
				ne[i].edge.insert(dest);
			}
		}
	}
		
	void showGraph()
	{
		for(int i = 0 ; i< SIZE; i++)
		{
			cout <<"The node " <<  ne[i].node << " is connected to ";
			 ne[i].edge.printlist();
			 cout << endl;
			 cout << endl;
		}
	}
};
int main()
{
	Graph G1;
	G1.Add_vertex(1);
	G1.Add_vertex(2);
	G1.Add_vertex(3);
	
	G1.Add_vertex(4);
	G1.Add_vertex(5);
	G1.Add_vertex(6);
	G1.show_vertex();
	
	G1.addEdge(1, 2);
	G1.addEdge(2, 3);
	G1.addEdge(6, 1);
	G1.addEdge(2, 1);
	G1.addEdge(3, 1);
	G1.addEdge(5, 1);
	
	G1.showGraph();
	cout << "InDegree -->>  " <<  G1.find_in_degree(1) << endl;
	cout << "Out Degree -->>  " <<  G1.find_out_degree(2) << endl;
	
	return 0;
}
