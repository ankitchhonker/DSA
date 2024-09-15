#include<iostream>
#include<vector>
using namespace std;
  int majority(int arr[], int n) {
  	
	vector <int> frequency(10,0);
	int i ;
	for(i=0;i<n;i++)
	 frequency[arr[i]]++;
	 
	 for(i=0;i<10;i++)
	 {
	 	  if(frequency[i]>n/2)
	 	  return (i) ;
	 }
	 return -1;
}

int main(){
	int arr[]={1,2,1,1,1,1,1,3,3,3,3,3,3,3,2,3,2,2} ;
	int n = sizeof(arr) / sizeof(int) ;
	
	cout<<"majority element:"<<  majority(arr,n) ;
	return 0;
	
}
