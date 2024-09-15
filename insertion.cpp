#include<iostream>
using namespace std ;
void insertionSort(int arr[], int n){
	int i,j,key;
	
	for(i=1; i<n; i++) {
		
		key = arr[i] ;
		j = i - 1 ;
		while(arr[j] > key){
			arr[j+1] = arr[j] ;
			j = j - 1 ;
		}
		arr[j+1] =  key ;
	}
}

void printArray(int arr[], int n)
{
	int i ;
	for(i=0; i<n; i++){
		cout<<" "<<arr[i] ;
	}
}

int main(){
	int arr[] = {12,11,1,2,4,2,55,3} ;
	int n = sizeof(arr) / sizeof(int) ;
	insertionSort(arr,n) ;
	printArray(arr,n) ;
	return 0;
}
