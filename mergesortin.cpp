#include<iostream>
#include<vector>
using namespace std ;
void merge(int arr[], int start, int mid, int end){
	vector <int> temp(end-start + 1);
	int left = start ;
	int right = mid + 1 ; 
	int index = 0 ;
	while(left <= mid && right <= end){
		
		if(arr[left] <= arr[right])
		{
		temp[index] = arr[left] ;
		index ++, left ++;
	    }
	    
	    else
	    {
	    	temp[index] = arr[right]  ;
	    	index ++ , right ++;
		}
		
	}
	while(left<=mid){
		temp[index] = arr[left];
		left ++, index ++;
	}
	
	while( right<=end){
		temp[index] = arr[right];
		right ++, index++;
	}
	int i ;
	for(i=0;i<temp.size() ; i++){
		arr[start+i] = temp[i] ;
	}
	
}
void printArray(int arr[],  int n) {
	int i ;
	
	for(i=0;i<n;i++)
	cout<<" "<<arr[i] ;
}
void mergesort(int arr[], int start, int end){
	if(start==end)
	return;
	
	int mid = start + (end - start) / 2 ;
	
	mergesort(arr,start,mid) ;
	
	mergesort(arr,mid+1,end) ;
	
	merge(arr,start,mid,end) ;
	
}
 
int main(){
	int arr[]={12,21,11,32,4,10,3,7};
	int n = sizeof(arr) / sizeof(int) ;
	
	cout<<"original Array:\n" ;
	printArray(arr,n);
	cout<<"\nAfter performing merge sort:\n" ;
	mergesort(arr,0,n) ;
	printArray(arr,n);
	
	return 0;
}
