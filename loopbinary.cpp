#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(key==arr[mid])
		return mid;
		else if(key>arr[mid]){
				start=mid+1;
		}
	
		else{
		start=mid-1;
	}
		mid=(start+end)/2;
	}
	return 0;
}
 int main(){
	int arr[5]={3,5,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	int t=10;
	int index=binarysearch(arr,n,t);
	 if(index!=0)
	 	cout<<"location of "<<t<<" is:"<<index;
	 
	 else
	 cout<<"element not found in an array:";
	 return 0;
}
