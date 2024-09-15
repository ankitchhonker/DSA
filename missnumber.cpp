#include<iostream>
using namespace std;
int missnumber(int arr[], int n){
	int i;
	int sum=0;
	 int sumelement=n*(n+1)/2;
	for(i= 1;i<=n;i++)
		 sum+=arr[i];
		 
	
	return sumelement-sum;
}
int main(){
	int arr[]={1,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	cout<<missnumber(arr,n);
	return 0;
}
