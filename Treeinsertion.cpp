#include<iostream>
#include<queue>
using namespace std;
//defination of Node..
class Node{
	public:
		int data;
		Node *left;
		Node *right;
		
		Node(int d)
		{
			left = NULL;
			data = d;
			right = NULL;
		}
};

int main(){
	int x;
	int first,second;
	queue< Node*> q;
	cout<<"Enter the Root element:";
	cin>>x;
	Node *root = new Node(x);
	q.push(root);
	while(!q.empty())
	{
		Node *temp = q.front();
		q.pop();
		//insert at the left of the Binary Tree
		cout<<"Enter left element of current Node:"<<temp->data<<":";
		cin>>first;
		if(first!=-1)
		{
			temp -> left = new Node(first);
			q.push(temp->left);
		}
		//insert at the right of the Binary Tree
			cout<<"Enter right element of current Node:"<<temp->data<<":";
		cin>>second;
		if( second!=-1)
		{
			temp -> left = new Node(second);
			q.push(temp->right);
		}
	}
	return 0;
	
}
