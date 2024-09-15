#include<iostream>
using namespace std;
int findminimum(int arr[], int n){
	int left=0;
	int right=n-1;
	int ans=arr[0];
	while(left<=right){
	int mid=right+(left-right)/2;
	if(arr[mid]>arr[0]){
		right=mid+1;
		ans=mid;
	}
	
	else if(arr[mid]<arr[0]){
	  ans=arr[mid];
	  left=mid-1;	
	}
	
}
return ans;
}

int main(){
	int arr[]={2,3,4,7,6,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<"minimum element:"<<findminimum(arr,n);
	return 0;
}

 