#include<iostream>
using namespace std;
class Stack{
	public:
	int arr[10];
	int size;
	int top;
	//stack constructor..
	
	Stack(int s)
	{
	top = -1;		
	}
	
	//push function..
	 void push(int val)
	{
		//check if stack is full or not
		if(top==size-1)
		{
			cout<<"Stack is empty:" ;
			return;
		}
		//otherwise incresed top by one and insert item into the stack.. 
		else
		top = top + 1;
		arr[top] = val;
		
	}
	
	//pop funtion
	void pop()
	{
		//check if stack is empty or not..
		if(top==-1)
		{
			cout<<"Stack is underflow:";
			return;
		}
		else
		{
			arr[top] =  0;
			top = top - 1;
		}
		
	}
	
	int peak()
	{
		return arr[top];
	}

	
};

int main(){
	 
	Stack st(10);
	int i;
	st.push(2);
	st.push(3);
	st.push(6);
	st.push(6);
	st.pop();
	st.pop();
	
	st.push(6);
	st.push(6);
	for(i=0;i<4;i++)
	{
		cout<<st.peak()<<" ";
		st.pop();
	}
 return 0;	
}

