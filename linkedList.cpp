#include<iostream>
using namespace std;
//Node structure
class Node{
	public:
	int data;
	Node *next;
	
	Node(int d){
		data = d;
		next = NULL;
	}
};

void insertList(Node *head, int data){

	
    Node *temp = new Node(data);
	  temp->next=head;
       head=temp;
	
}

void printList(Node *head){
	Node *curr = head;
	if(curr==NULL)
	return;
	
	cout<<curr->data<<"-->";
	printList(curr->next);
}

int main(){
	Node *head=NULL;
 
    insertList(head,1);
    insertList(head,2);
    insertList(head,3);
    insertList(head,4);
    insertList(head,5); 
    insertList(head,6);
    
    printList(head);
	return 0;
       
}
