#include<iostream>
using namespace std;
int findduplicate(int arr[], int n){
	int i,ans=0;
	for(i=0;i<n;i++){
		ans=ans^arr[i];
	}
	for(i=0;i<n;i++){
		ans=ans^i;
	}
	return ans;
}
int main(){
	int arr[]={1,2,3,1,7};
	int n=sizeof(arr)/sizeof(int);
	cout<<findduplicate(arr,n);
	return 0;
}
