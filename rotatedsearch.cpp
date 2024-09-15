#include<iostream>
using namespace std;
int search(int arr[], int n , int target){
	int start=0;
	int end=n-1;
	
	while(start<=end){
		
		int mid=start+(end-start)/2;
		if(arr[mid]==target)
		  return mid;
		  
		  else if(arr[mid]>=arr[0]){
		  	if(arr[start]<target&&arr[mid]>target)
		  	end=mid-1;
		  	
		  	else
		  	start=mid+1;
		  }
		  
		  else
		  {
		  	if(arr[mid]<target&&arr[end]>target)
		  		start=mid+1;
		  		
		  		else
		  		end=mid-1;
			  }
		  }
	}
	

int main(){
	int arr[]={2,3,4,5,6,0,1,3,4};
	int n=sizeof(arr)/sizeof(int);
	
	int key=1;
	cout<<"location of "<<key<<"="<<search(arr,n,key);
	
	return 0;
}
