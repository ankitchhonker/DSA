#include<iostream>
using namespace std ;
class ListNode {
	public:
		
	int data ;
	ListNode *next ;
	
	ListNode(int val) {
		data = val ;
		next = NULL ;
	}
};

void insertionList(ListNode *&head, int d) {
 if(head == NULL)
 head = new ListNode(d) ;
 
 ListNode *temp = new ListNode(d) ;
 temp -> next = head ;
 head = temp ;	
}

void printList(ListNode *head){
	ListNode *temp = head ;
	while(temp) {
		cout<<temp -> data <<"->" ;
		temp = temp -> next ;
	}
}
void Listfasttraverse(ListNode *head){
	ListNode *fast = head ;
	while(fast) {
		cout<<fast->data <<" " ;
		fast = fast -> next -> next ;
		
	}
	
}
int main() {
	ListNode *head = NULL ;
	
	insertionList(head,1) ;
	insertionList(head,2) ;
	insertionList(head,3) ;
	insertionList(head,4) ;
	insertionList(head,5) ;
	insertionList(head,3) ;
	
	cout<<"Linked List :\n" ;
	printList(head) ;
	
	cout<<"after traverse fast List:\n" ;
	Listfasttraverse(head) ;
 	
}
