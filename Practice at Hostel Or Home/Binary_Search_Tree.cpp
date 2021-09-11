#include<iostream>
using namespace std;
class node{
	public:
		int val;
		node *right;
		node *left;
		node()
		{
			cout<<" bronga";
			left=NULL;
			right=NULL;
		}
};

class Binary_Tree{
	public:
		node *root;
		int no_ofnodes;
		Binary_Tree()
		{
			cout<<"khna";
			root=NULL;
			no_ofnodes= 0;
		}
		
	void insert_node(node *rt, int value)
	{
//		if(value == rt->val)
//		{
//			cout<<"Value Already Exist"<<endl;
//			return;
//		}
		if (root == NULL)
		{
			rt=new node;
			rt->val= value;
			rt->right= NULL;
			rt->left=NULL;
			root= rt;
			no_ofnodes++;
			return;
		}
		else
		{
			if(value < rt->val)
			{
				if(rt->left!= NULL)
				{
					insert_node(rt->left, value);
					return;
				}
				else
				{
					rt->left= new node;
					rt->left->val= value;
					rt->left->left=NULL;
					rt->right->right=NULL;
					no_ofnodes++;	
				}
			}
			
			else(value > rt-> val)
			{
				if(rt->right!=NULL)
				{
					insert_node(rt->right, value);
					return;
				}
				else
				{
					rt->right= new node;
					rt->right->val= value;
					rt->left->left=NULL;
					rt->right->right=NULL;
					no_ofnodes++;	
				}
			}
		}
	}
	
	void post_order_traversal(node *rt)
	{
		if(root == NULL)
		{
			cout<<"Tree Is Empty"<<endl;
			return;
		}
		if (rt->left!=NULL)
		{
			post_order_traversal(root->left);
		}
		if(rt->right!=NULL)
		{
			post_order_traversal(root->right);
		}
		cout<<root->val<<" ";
	}

};

int main()
{
	Binary_Tree b1;
	b1.insert_node(b1.root,19);
	b1.insert_node(b1.root,18);
	b1.insert_node(b1.root,20);
	b1.post_order_traversal(b1.root);
	return 0;
}
