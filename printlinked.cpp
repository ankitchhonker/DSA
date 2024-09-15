#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *next;
	
	Node(int value) : data(value), next(0){}
	
};

void insertNode(Node *& head , int value){
	Node *newnode = new Node(value);
	 newnode -> next = head ;
	 head = newnode ;
}

void display (Node *head){
	Node *cur = head ;
	while(cur != 0){
		cout<<cur->data<< " ";
		cur = cur -> next;
	}
	cout<<endl;
}

int main(){
	Node *head = 0;
	insertNode(head, 2);
	insertNode(head, 5);
	insertNode(head, 5);
	insertNode(head, 6);
	
	cout<<"linked list";
	display(head);
	return 0;
}
