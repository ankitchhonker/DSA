//Aim:- Perform of all Tree traversal 
#include<iostream>
#include<queue>
using namespace std;
 
// defination of Tree Node 
class Node{
	public:
		int data;
		Node* left,*right;
		
		Node(int val)
		{
			data = val;
			left = NULL;
			right = NULL;
		}
};

Node* BinaryTree()
{
	int x;
    cin>>x;
    if(x==-1)
    return NULL;
    
    Node* temp = new Node(x);
    //insert from the left
    cout<<"Enter the left element of "<<temp->data<<" :";
    temp -> left = BinaryTree();
    //after got NULL Or -1 into the left child insert into thr right child..
    cout<<"\n Enter the  right element of "<<temp->data<<" :";
    temp -> right = BinaryTree();
    
    return temp;
}

//Preorder traversal..
void preorder(Node* root)
{
	if(root==NULL)
	return;
	
	cout<<" "<<root->data;
	preorder(root->left);
	preorder(root->right);
}

//Inorder Traversal
void  Inorder(Node* root)
{
	if(root==NULL)
	return;
	
	Inorder(root->left);
	cout<<" "<<root->data;
	Inorder(root->right);
}

//Postorder traversal
void postorder(Node *root)
{
	if(root == NULL)
	 return;
	postorder(root->left);
	postorder(root->right);
	cout<<" "<<root->data;
	
}

// level order  traversal
void levelorder(Node *root)
{
	queue<Node*>q;
	
	q.push(root);
	while(!q.empty())
	{
		Node *temp= q.front();
		//remove the link it can be left or right into the queue..
		q.pop();
		//print level order
		cout<<" "<<temp->data;
		//insert into the queue of left left link of Node
		if(temp->left)
		q.push(temp->left);
		//insert into the queue of right link of Node
		if(temp->right)
		q.push(temp->right);
		
	}
}

int main(){
	Node *root;
	cout<<"Enter Root Element:";
	root = BinaryTree();
	
	cout<<"Pre-eorder :";
	preorder(root);
	
	cout<<"\n In-oreder:";
	Inorder(root);
	
	
	cout<<"\n Post-Order";
	postorder(root);
	
	cout<<"\n Level Order:";
	levelorder(root);
	
	
	return 0;
}



