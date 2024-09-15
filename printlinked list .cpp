#include<iostream>
using namespace std;
class Node {
	public :
	int data ;
	Node *next ;
	
	
	Node (int value){
		data = value ;
		next = NULL ;
	}
};
void display(Node *head){
	Node *temp = head ;
	while(temp!=NULL){
		cout<<temp -> data <<" " ;
		temp = temp -> next ;
	}
}
void insert(Node *&head ,int arr[]){
	int i ;
	Node *temp = NULL ;
	for(i = 0 ; i < 2 ; i++) {
	if(head==NULL)
	head = new Node (arr[i]) ;
	else 
	 temp = new Node(arr[i]) ;
	head = temp -> next ;
}
}

int main()
{
	Node * head = NULL ;
	int arr[] = {1, 3};
	
insert(head,arr) ;
	

display (head) ;

return 0;
}

