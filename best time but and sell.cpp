#include<iostream>
using namespace std;
int profitmax(int arr[], int n){
	int buy = arr[0] ;
	int sell = 0 ;
	int i , buytime ;
	
	for(i=0 ; i<n ; i++) {
		if(arr[i]<buy){
			buy = arr[i] ;
		 buytime = i ;
		}
	}
	
	for( i = buytime ; i < n ; i++) {
		if(sell < arr[i])
		sell = arr[i] ;
	}
	
	return (sell - buy) ;
}
int main(){
	int arr[]={4,3,2,1} ;
	int n = sizeof(arr) / sizeof(int) ;
	cout<<"MAXIMUM PROFIT IS:"<<profitmax(arr,n) ;
	return 0; 
}
