#include<iostream>
using namespace std;

int findsqrt(int arr[],int n, int key){
	int start=0;
	int end=n-1;
	
	while(start<=end){
		int mid=start+(end-start)/2;
		
		if(arr[mid]*arr[mid]==key){
			return arr[mid];
		}
		
		else if(arr[mid]*arr[mid]<key){
			start=mid+1;
		}
		
		else
		 end=mid-1;
	}
	
	return -1;
}

int main(){
	int arr[]={1,2,3,5,6,9,12,25};
	int n=sizeof(arr)/sizeof(int);
	int key=26;
	 
	 cout<<"square root :"<<findsqrt(arr,n,key);
	return 0;
}
