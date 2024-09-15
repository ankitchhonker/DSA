#include<iostream>
using namespace std;
int findsecondlasrgest(int arr[], int n){
	int i,max=INT_MIN,smax=INT_MIN;
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]>smax){
			if(arr[i]!=max)
			smax=arr[i];
		}
	} 
	return smax;
}

int main(){
	int arr[]={};
	int n=sizeof (arr)/sizeof(int );
	cout<<" Second largest  element of an array: "<<findsecondlasrgest(arr,n);
	return 0;
}
