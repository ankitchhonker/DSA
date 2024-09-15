#include<iostream>
using namespace std;

class TreeNode{
	public:
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int d) 
		{
			left = right = NULL;
			val  = d;
		}
};

TreeNode* insertBST()
{
	int x;
	cin>>x;
	if(x==-1)
	return NULL;
	
	TreeNode* temp = new TreeNode(x);
	cout<<"Enter left child of "<< temp->val <<":";
    temp->left = insertBST();
    	cout<<"Enter right child of "<< temp->val <<":";
    temp->right = insertBST();
    
    return temp;
}
int main(){
	TreeNode* root ;
	cout<<"Enter Root element:";
	root = insertBST();
	return 0;
}
