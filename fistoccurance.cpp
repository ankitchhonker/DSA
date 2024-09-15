#include<iostream>
using namespace std;
int findfirstoccur(int arr[], int n, int key){
	int left=0;
	int right=n-1;
	while(left<=right){
		int mid=(right+left)/2;
		
		if(arr[mid]==key){
		     right=mid-1;
		 if(arr[mid]!=key)
		 return mid;
		  
		 }
		
		else if(arr[mid]<key){
			  left=mid+1;
		}
		else
		if(arr[mid]>key){
			 right=mid-1;
		}
	}
}
int main(){
	int arr[]={1,2,2,3,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	int key=2;
	cout<<"first occurace:"<< findfirstoccur(arr,n,key);
	return 0;
}
