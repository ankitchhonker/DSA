#include<iostream>
using namespace std;
int findinsertloc(int arr[],int n,int key){
	
	int left=0;
	int right=n-1;
	
	while(left<=right){
		
		int mid=left+(right-left)/2;
		
		if(arr[mid]<key && arr[mid+1]>key){
			return mid;
		}
		
		else if(arr[mid]<key){
			left=mid+1;
		}
		
		else
		right=mid-1;
	}
}

int main(){
	
	int arr[]={1,2,3,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	int key =3;
	cout<<" insert location :"<<findinsertloc(arr,n,key);
	return 0;
	
}
