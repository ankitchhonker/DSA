#include<iostream>
using namespace std ;
//defination of Node.
class ListNode {
	public :
		int data ;
		ListNode *next ;
		
		ListNode(int val){
			data = val ;
			next = NULL ;
		}
};
void removeDuplicate(ListNode *head) {
	
	if(!head || !head -> next)
	return;
	
	 ListNode * cur = head -> next , *prev = head ; 
	   
	while(cur){
		//remove if duplicate contain..
		if(cur -> data == prev -> data){
			prev -> next = cur -> next ;
			delete cur ;
			cur = prev -> next ;
			
		}
		
		else {
			
		//doesnet contain duplicate ..
		prev = prev -> next ;
		cur = cur -> next ;
		
	}
		
  }
  
}

void insertion(ListNode *&head, int d) {
	ListNode *temp = head ;
	if(temp==NULL) 
	 temp = new ListNode(d) ;
	 
	 temp = new ListNode(d) ;
	  temp -> next = head ;
	  head = temp ;
	
}

void printListNode(ListNode *head){
	ListNode *temp = head ;
	while(temp){
		cout<<temp -> data ;
		
		if(temp!=NULL)
		cout<<"-->" ;
		
		temp = temp -> next ;
 	}
 	cout<<"\n" ;
}

int main() {
	ListNode *head = NULL ;
	insertion(head,1) ;
	insertion(head,2) ;
	insertion(head,4) ;
	insertion(head,4);
	insertion(head,5) ;
	insertion(head,5) ;
	
	cout<<"Original Linked List :" ;
	printListNode(head) ;
	
	cout<<"After remove duplicate from Linked List :" ;
	removeDuplicate(head) ;
	printListNode(head) ;
	
	return 0;
}

