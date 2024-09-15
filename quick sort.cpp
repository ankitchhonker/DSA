#include<iostream>
#include<algorithm>
using namespace std;
 
int partisian(int arr[],int start, int  end){
	int pos=start;
	int i;
	for(i=start;i<=end;i++){
		
		
			if(arr[i]<=arr[end]){
			swap(arr[i],arr[pos]);
			pos++;
	}
		 
	}
	return (pos-1);
}
 
void quicksort(int arr[], int start, int end){
  
	if(start>=end)
		return; 
		
		int	pivot=partisian(arr,start,end);
		
		quicksort(arr,start,pivot-1);
		quicksort(arr,pivot,end);
	
}
int main(){
	int arr[]={ 6,5,4,3,2};
	int n=sizeof(arr) / sizeof(int);
	int s=0;
	int e=n-1;
	int i;
    quicksort(arr,s,e);
    
    for(i=0;i<=e;i++){
    	cout<<" "<<arr[i];
	}
    
    return 0;
	
}
