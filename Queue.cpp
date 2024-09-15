#include<iostream>
using namespace std ;
//defination of Queue..
class Queue{
	int  size;
	int data;
	int rear;
	int front;
	int *arr;
	
	public:
		Queue(int s)
		{
			rear = -1;
			front = -1;
			size = s;
			arr = new int [size];
		}
		void insert(int d)
		{
			if(rear = size-1)
			{
				cout<<"queue is full:";
				return;
			}
			else if(front==-1)
			{
				rear = front = 0;
				 arr[rear] = d;
			}
			else
			{
				rear = rear + 1;
				arr[rear] = d;
			}
		}
		
		void deleteQ()
		{
			if(front ==-1)
			{
				cout<<"Queue is empty:";
				return;
			}
			
			else 
			{
				int item = arr[front];
				front = front -1;
				cout<<"\n item:"<<item<<"deleted:";
			}
		}
		
		void display()
		{
			int i;
			cout<<"\n Element present in Queue:";
			for(i=0; i<size; i++)
			{
				cout<< " "<<arr[i];
			}
		}
};
int main(){
	Queue ex(5);
	
	ex.insert(2);
	ex.insert(6);
	ex.insert(7);
	ex.insert(1);
	ex.insert(9);
	ex.display();
	
	return 0;
	
}

