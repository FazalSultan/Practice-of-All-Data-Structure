#include<iostream>
using namespace std;
class Node{
	public:
		int val;
		Node *left;
		Node *right;
		Node()
		{
			left =NULL;
			right=NULL;
		}
};

class Binary_tree{
	private:
		Node* savedParent;
		int sibling;

	
	public:
		Node *root;
		Binary_tree()
		{
			root=NULL;
		}
		
		
	void insert_node( Node *temp ,int value)
	{
		if(root == NULL)
		{
			root=new Node;
			root->val=value;
			return;
		}
		if(temp->val == value)
		{
			cout<<"Value Already Present in the Tree therefore we Can't Insert this Value as a Node OK"<<endl;
			return;
		}
		if(value < temp->val)
		{
			if(temp->left ==NULL)
			{
				temp->left=new Node;
				temp->left->val=value;
				return;
			}
				insert_node(temp->left,value);
		}
		if(  value > temp->val )
		{
			if(temp->right == NULL)
			{
				temp->right=new Node;
				temp->right->val=value;
//				root->right->right=NULL;
//				root->right->left=NULL;
				return;
			}
				insert_node(temp->right,value);
		}
	}
	
	void pre_order(Node *root)
	{
		cout<<root->val<<" ";
		if(root->left != NULL)
		{
			pre_order(root->left);
		}
		
		if(root->right != NULL)
		{
			pre_order(root->right);
		}
	}
	Node* getParent()
	{
		return savedParent;
	}
	void setParent(Node *root, int val_parent)
	{
		if(root->val == val_parent)
		{
			savedParent = root;
			return;
		}
		if( val_parent < root->val)
		{
			if(root->left->val == val_parent || root->right->val == val_parent)
			{
				savedParent = root;
				return;
			}
			  setParent(root->left, val_parent);
		}
		if(val_parent > root->val)
		{
			if(root->right->val == val_parent || root->left->val == val_parent)
			{
			 	savedParent = root;
			 	return;
			}
			 
			 setParent(root->right,val_parent);
		}
	}
	
//	void delete_node(Node *root ,int deleting_value)
//	{
//		Node *ttemp;
//		Node *p;
//		ttemp=root;
//		if(root == NULL)
//		{
//			cout<<"Your Tree Is Empty"<<endl;
//			return;
//		}
//		else if(root->val == deleting_value)    // Case #01 Node have  Zero child !
//		{
//			if(root->left == NULL && root->right == NULL)
//			{
//				delete this->root;
//				this->root= NULL;
//				return;
//			}
//		}
//		else if(ttemp->val == deleting_value)
//		{
//			if(ttemp->left != NULL && ttemp->right ==NULL)
//			{
//				p=parent(root->left,deleting_value);
//				ttemp->left=p;
//				delete ttemp;
//				ttemp=NULL;
//				return;
//			}
//		}
//	}
	int getSibling(){ return sibling;}
	void finding_sibling(Node *root , int val_sibling)
	{

//		Node *h=NULL;
//		h=this->root;
//		if(h->val == val_sibling)
		{
			cout<<"We can't find the Sibling of Root(Tree): "<<endl;
		}
		
		if(root->val == val_sibling)
		{
			setParent(this->root,  val_sibling);
			Node* p = getParent();
			if(p->left->val == val_sibling)sibling =  p->right->val;	
			else if(p->right->val == val_sibling)sibling =  p->left->val;	
			
		}
			
		if(val_sibling < root->val)finding_sibling(root->left , val_sibling);	

		if(val_sibling > root->val)finding_sibling(root->right , val_sibling);
	
	}
};
int main()
{
	Binary_tree b1;
	b1.insert_node(b1.root,40);
	b1.insert_node(b1.root,30);
	b1.insert_node(b1.root,50);
	b1.insert_node(b1.root,26);
	b1.insert_node(b1.root,31);
	b1.insert_node(b1.root,43);
	b1.insert_node(b1.root,51);
	b1.insert_node(b1.root,13);
	b1.pre_order(b1.root);
	cout<<endl;
//	b1.delete_node(b1.root, 26);
	//b1.pre_order(b1.root);
	b1.setParent(b1.root,13);
	Node* p = b1.getParent();
	cout<<"Parent is: "<<p->val<<endl;
	b1.finding_sibling(b1.root,40);
	cout<<"this is my sibling " <<  b1.getSibling();
	
	return 0;
}
