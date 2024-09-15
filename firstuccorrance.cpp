#include<iostream>
using namespace std;
int firstoccur(int arr[],int key,int n){
	int s=0;
	int e=n-1;
	int ans=0;
	while(s<=e){
		int mid=(e+s)/2;
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]>key){
			s=mid+1;
			
		}
		else
		s=mid-1;
		
		return ans;
	}
	return -1;
}
int main(){
	int arr[]={4,4,4,4,4,4,5,6};
	int key=4;
	int size=sizeof(arr)/sizeof(int);
	int answer=firstoccur(arr,key,size);
	cout<<"first occurance of 4:"<<answer;
	return 0;
}
