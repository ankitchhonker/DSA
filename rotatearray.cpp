#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&arr, int start , int end){
   
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

void rotateArray(vector<int>&arr, int k){
	int n = arr.size();
	 k = k % n;
	 
	 reverse(arr,0,n-1);
	 reverse(arr,0,k-1);
	 reverse(arr,k,n-1);
}

void PrintArray(vector<int>&arr){
	int i;
	for(i=0;i<arr.size();i++){
		cout<<" "<<arr[i];
	}
}


int main(){
	vector<int>arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5); 
	
	int k =2;
	
	rotateArray(arr,k);
	PrintArray(arr);

	
}
