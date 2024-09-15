#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int d){
			d=data;
			next=NULL;
		}
};
void insertathead(Node* &head, int d){
	Node* temp=new Node(d);
	temp -> next= head;
	head =temp;
	
}
void print(Node* &head){
	Node *temp=head;
	
	while(temp!= NULL){
		 
	}
	cout<<endl;
}

int main(){
	Node *node1= new Node(10);
	cout<< node1 -> data<<endl;
	cout<< node1->next <<endl;
	
	Node* head =node1;
	print(head);
	insertathead(head, 12);
	 print(head);
	
	
	
}
