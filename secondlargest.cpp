#include<iostream>
using namespace std;
 
	int findsecondlastlargest(int arr[],int n){
		int i,max=-1;
		for(i=0;i<n;i++){
			if(arr[i]>max){
				max=arr[i];//linear search..
			}
		}
		int secondlast=-1;
		for(i=0;i<n;i++){
			
				if(arr[i]>secondlast);{
					if(arr[i]!=max)
					secondlast=arr[i];
				}
			
			
		}
		return secondlast;
	}
int main(){
 
	int arr[]={8,8,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<findsecondlastlargest(arr,n);
	return 0;
}
