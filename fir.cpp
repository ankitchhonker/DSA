#include<iostream>
using namespace std;
int forstoccur(int arr[], int n, int key){
	int s=0;
	int e=n-1;
	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key)
			ans=mid;
		e=mid;
		
		 
	}
	return ans;
}
int main(){
	int arr[]={1,2,2,3,4,5};
	int key=2;
	int n=sizeof(arr)/sizeof(int);
	int answer=forstoccur(arr,n,key);
	cout<<"index:"<<answer;
	return 0;
}
