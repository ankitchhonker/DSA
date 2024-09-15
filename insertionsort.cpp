#include<iostream>
void insertionsort(int arr[], int n){
	int i,j;
	int temp=0;
	for(i=0;i<n;i++){
		for(j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
			 temp=arr[j-1];
			 arr[j-1]=arr[j];
			 arr[j]=temp;
		}
			  
		}
	}
	for(i=0;i<n;i++){
	printf(" %d",arr[i]);
	}
	
}
int main(){
	int arr[]={3,1,2,6,2,4,1,-2};
	int n=sizeof(arr)/sizeof(int);
	int i;
	insertionsort(arr,n);
	
	return 0;
}
