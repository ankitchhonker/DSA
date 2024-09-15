#include<iostream>
using namespace std;
int trapingrainwater(int arr[], int n){
	int i;
	int right[n];
	int left[n];
	right[0]={0};
	left[0]={0};
	
	int ans=0;
	
	for(i=1;i<n;i++){
	left[i]=max(arr[i],arr[i+1]);
	 right[i]=max(arr[n-i],arr[n-i-1]);
	 }
	 for(i=0;i<n;i++){
	 	int min=min(left[i],right[i]);
	 	ans+=(min-arr[i]);
	 }
	 return (ans);
}
int main(){
	int arr[]={3,2,4,5,2,1,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<"total amount of water that is store in building bloks:"<<trapigrainwater(arr,n);
	return 0;
}