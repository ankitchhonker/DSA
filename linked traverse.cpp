#include<iostream>
//defination of Node ..
using namespace std;
 struct Node{
 	int data;
 	Node *next;
 	
 	Node(int value) : data(value), next(0){}
 };
 //insertion in linked list ..
 void insertNode(Node*& head, int value) {
 	Node * newnode = new Node(value);
 	newnode->next = head ;
 	head = newnode;
 }
 
 void deleteNode(Node *head,  int key){
 	if(head==NULL)
 	cout<<"linked list empty:\n" ;
 	
 	Node *cur = head , *prev = NULL ;
 	while(cur!=NULL){
 		if(cur ->data == key){
 			prev -> next = cur -> next ;
 			delete cur ;
 			return;
		 }
 		prev = cur ;
 		cur = cur -> next ;
	 }
 }
 void   display( Node* head) {
 	   Node *temp = head ;
		 
 	while( temp !=  NULL){
 		 cout<< temp -> data ;
 		temp = temp -> next ;
 		if(temp!=NULL)
 		cout<<"->" ;
 	 
 }
 cout<<endl;
 }
 // List reverse..

 
   void reverse (Node *&head) {
 	Node *curr = head ;
 	Node *prev = NULL ;
 	Node *nextNode = NULL ;
     
 	while(curr) {
 		 nextNode = curr -> next ;//save the next Node
 		 curr -> next = prev ;// link curr with previous
 		 prev = curr ;// move one step forward in the list 
 		 curr = nextNode ;// move one step forward in the list ..
 		
 	}
   head = prev ;
 }
  
  
 
 int main(){
 	Node *head =  NULL ;
 	
 	
 	insertNode(head, 1);
 	insertNode(head, 2);
 	insertNode(head, 3);
 	insertNode(head, 4);
 	insertNode(head, 5);
 	insertNode(head, 6);
 	insertNode(head, 7);
 	insertNode(head, 8);
 	
 	
 	cout<<" linked list:\n";
 	display(head);
 	cout<<"Reverse List:" ;
   reverse (head) ;
 	display(head) ;
 	
 	 
 	
 	return 0;
 	 
 }
