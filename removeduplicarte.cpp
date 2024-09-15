#include<iostream>
#include<vector>
using namespace std;
void removeDuplicate(vector<int>&arr){
	int i;
	int index = 1;
	
	for(i=1; i<arr.size(); ++i){
		if(arr[i]!=arr[i-1]){
		 arr[index] = arr[i];
			++index;
		}
	}
	arr.resize(index);
	 
}

void PrintArray(vector<int>&arr){
	int i;
	for(i=0; i<arr.size(); i++){
		cout<<" "<<arr[i];
	}
	cout<<endl;
}

int main(){
	vector<int>arr = {1,1,2,2,2,2,3,4,4,5};
	cout<<"Before removing duplicate element:\n"<<endl;
	PrintArray(arr);
	cout<<"After Removing duplicate:\n";
	PrintArray(arr);
	return 0;
}
