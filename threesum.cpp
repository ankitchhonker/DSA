#include<iostream>
using namespace std;
bool threesum(int arr[], int n, int target){
	int left=0;
	int right=1;
	int end=n-1;
	int three=target-(arr[left]+arr[right]);
	
	while( right<=6){
		int mid=(left+right)/2;
		if(arr[mid]==three){
			return true;
		}
		
		else if(arr[mid]>three)
		 left=mid+1;
		else
		 right=mid-1;
	}
	return false;
}
int main(){
	int arr[]={2,3,4,5,9,10};
	int n=sizeof(arr)/sizeof(int);
	int target=9;
	if(threesum(arr,n,target))
	cout<<"three sum valid:";
	else
	cout<<"three sum not valid:";
	return 0;
	
}
