#include<iostream>
using namespace std ;
//defination of Tree Node
class TreeNode{
	public:
		int val;
		TreeNode *left,*right;
		
		TreeNode(int v)
		{
			val = v;
			left = right = NULL;
		}
};
//Tu hi siya ka ram radha ka tu hi shyam janmo janmo ka hi too sath hai meera ka tu bhajan bhajte harey pawa
TreeNode* inseitonBST(TreeNode *root, int data)
{
	if(!root)
	{
	TreeNode *temp = new TreeNode(data);
	return temp;
    }
    
    if(data > root->val)
     root->right = inseitonBST(root->right,data);
     
     else
     root->left =  inseitonBST(root->left,data);
     
     return root;
	
	
}
bool Search(TreeNode *root, int data)
{
	if(!root)
	return false;
	
	if(root->val==data)
	return true;
	
	else if(root->val > data)
	return Search(root->left,data);
	
	else
	return Search(root->right,data);
	

}

void inorder(TreeNode *root)
{
	if(!root)
	return;

	inorder(root->left);
	cout<<" "<<root->val;
	inorder(root->right);
}


int main(){
	TreeNode *root=NULL;
	int arr[]={2,3,1,3,5,6,-1,3,2,1,2,34,4,5,6};
	int i;
	for(i=0; i<15; i++)
	 root = inseitonBST(root,arr[i]);
	  
	  cout<<Search(root,9);
	 
}
