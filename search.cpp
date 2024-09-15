#include<iostream>
using namespace std; 
int binary_search(int arr[], int start, int end, int target)
{
	if(start>end)
	return 0;
	
	int mid = start + end / 2;
	if(arr[mid]==target)
     return true;
     
     else if(arr[mid]<target)
     return binary_search(arr,mid+1,end,target);
     
     else
     return binary_search(arr,start,mid-1,target);
     
 
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(int);
	
	if(binary_search(arr,0,n-1,8))
	cout<<"Element present:";
	else
	cout<<"Element Not present:";
	
	return 0;
}
