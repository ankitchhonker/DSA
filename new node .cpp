#include<iostream>
using namespace std;
//Node representation...
class Node {
	public :
		int data ;
		Node *next ;
		
		Node(int value){
			data = value ;
			next = NULL ;
		}
};

void insert(Node *&head , int data){
	if(head== NULL)
	Node * head = new Node( data) ;
	
	 
	Node* temp = new Node( data) ;
	temp -> next = head ;
	head = temp ;
}

void display(Node *head) {
	
	Node *temp = head ;
	while(temp!=NULL)
	{
		cout<<temp->data <<" " ;
		temp = temp -> next ;
	}
}
void delete_node(Node * head ){
	Node   *prev = NULL , *curr = head ;
	if(curr!=NULL){
		 prev = curr ;
		 curr = curr -> next ;
		 
	}
	prev -> next = NULL ;
	delete curr ;
	
	  
	
	
}
	  
	
	


int main(){
	
	 Node * head = NULL ;
	
	int arr[]={1,2,3,4,5,6};
	int i ;
	for(i = 0 ; i < 6 ; i++){
		insert(head,arr[i]) ;
	}
	delete(head) ;
	display(head) ;
	
	return 0;
}
