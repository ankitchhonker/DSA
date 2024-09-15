#include<iostream>
using namespace std;
int binarysearch(int arr[], int n ,int key){
	int left=0;
	int right= n-1;
	strlen(str[])
	
	while(left<=right){
		int mid=right+(left-right)/2;
		
		if(arr[mid]==key)
		return mid;
	
			else if(arr[mid]>key)
		left=mid+1;
		
		else
		right=mid-1;	
		
	}
}


int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	int key=5;
	cout<< "location of " <<key<<" is"<<binarysearch(arr,n,key);
	return 0;
}
