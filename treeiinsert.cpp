#include<iostream>
using namespace std ;
class TreeNode{
	 public:
	 	int  val;
	 	TreeNode *left;
	 	TreeNode *right;
	 	
	 	TreeNode(int d)
	 	{
	 	  val = d;
		 left = right = NULL;	
		}
};
int  Treeinsertion()
{
	int x;
	cin>>x;
	if(x==-1)
	return NULL;
	
	TreeNode *temp = new TreeNode(x);
	cout<<"\n Enter left child of "<<temp->val<<" :";
	temp -> left = Treeinsertion();
	cout<<" \n Enter left child of "<<temp-> val<<":";
	temp->right = Treeinsertoin();
	
	return temp; 
}
int main(){
	cout<<
	TreeNode *root ;
	cout<<"Enter Root element:";
	root = Treeinsertion();
	return 0;
}
