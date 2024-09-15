#include<iostream>
using namespace std;
void twosum(int arr[],int n){
	int left=0;
	int right=n-1;
	int sum;
	int target=11;
	while(left<=right){
		sum=arr[left]+arr[right];
		if(sum==target){
			cout<<" "<<arr[left];
			cout<<" "<<arr[right];
		 break;
		}
		else if(sum<target){
			left+=1;
		}
		else
		right-=1;
	}
	
}
int main(){
	int arr[]={-5,4,5,7,9,10};
	int size=sizeof(arr)/sizeof(int);
	twosum(arr,size);
	return 0;
}
