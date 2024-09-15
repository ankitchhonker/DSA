#include<iostream>
using namespace std;
//
class ListNode {
	public :
		
		int value ;
		ListNode * next ;
		
		ListNode(int d){
			value = d ;
			next = NULL ;
		}
};


int main() {
	int arr[]={2,3,4,5};
	int i ;
	ListNode *head = NULL ;

	
	for(int i = 0 ; i < 4 ; i + +){
		
	  if(head==NULL)
	  head = new ListNode(arr[i])
	  
	  ListNode *temp = new ListNode(arr[i]) ;
	  temp = head ;
	  temp = temp -> next ;
}
//print linked list ..
ListNode *temp = head ;
while(temp){
	cout<temp -> data << " " ;
	cout<<"---->"
	temp = temp -> next ;
}
return 0;
}
