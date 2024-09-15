#include<iostream>
using namespace std;
int firstoccur(int arr[], int n, int key){
	int s=0;
	int e=n-1;
	int ans=0;
	while(s<=e){
		int mid=(e+s)/2;
		if(arr[mid]==key)
		{
			ans=mid;
		}
				else if(arr[mid]>key){
		 e=mid-1;	
		}
		else{
			e=mid+1;
		}
		
			
		
		
	}
	return (ans);
}
int main(){
	int arr[]={1,2,3,4,4,5};
	int n=sizeof(arr)/sizeof(int);
	int key=4;
	int index=firstoccur(arr,n,key);
	cout<<index;
	return 0;
}
