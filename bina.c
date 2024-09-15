#include<stdio.h>
int binarysearch(int arr[], int left, int right, int key){
	if(right>=left){
		int mid=left-(right-left)/2;
		if(arr[mid]==key)
		return mid;
		if(arr[mid]>key){
			return binarysearch(arr,mid-1,right,key);
		}
		return binarysearch(arr,left,mid+1,key);
		
	}
	return -1;
}
int main(){
	int arr[]={5,3,7,9,8};
	int n=sizeof(arr)/sizeof(int);
	int key=9;
	int result = binarysearch(arr,0,n-1,key);
	if(result==-1)
	printf("element not found :");
	else
	printf("element found at index=%d",result);

return 0;	
}
