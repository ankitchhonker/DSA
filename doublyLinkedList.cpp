#include<iostream>
using namespace std;

 class doublyLinkedList
 {
public:
     int data;
     doublyLinkedList* prev;
     doublyLinkedList* next;
 
    doublyLinkedList(int data)
 {
     this->prev = NULL;
      this->next = NULL;
     this->data = data;
 }
    
 };
 
  
 
void insertAtStart(doublyLinkedList* &head,int d){
     doublyLinkedList* temp = new doublyLinkedList(d);
    
    if (head == nullptr) {  // If list is empty, the new node becomes the head
        head = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;  // Update the head pointer
    }
     
}
void insertAtEnd(doublyLinkedList* &head, int d){ 
    doublyLinkedList* temp = new doublyLinkedList(d);
      
    if (head == nullptr) {  // If list is empty, the new node becomes the head
        head = temp;
    } else{
        doublyLinkedList* curr = head;
        while(curr->next!= nullptr)
        curr=curr->next;

        curr->next = temp;    
        temp->prev = curr; 

    }

}
void PrintList(doublyLinkedList* head){
    doublyLinkedList* curr = head;
 
    while(curr){
        cout<<curr->data<<"-->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
void reverseList(doublyLinkedList* head){
    doublyLinkedList* last = head;
    while(last->next != nullptr){
        last = last->next;
    }
    while(last){
        cout<<last->data<<"-->";
        last=last->prev;
    }
    cout<<"NULL";
}

int main(){
    doublyLinkedList* head=nullptr;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtStart(head,3);
    insertAtStart(head,4);

cout<<"doubly linked List in reverse order \n";
     PrintList(head);
     cout<<endl;
      
     
    return 0;
}
