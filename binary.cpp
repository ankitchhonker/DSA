#include<iostream>
using namespace std; 
int binary_search(int arr[], int n, int target)
{
	int start = 0;
	int end = n - 1;
	while(start<=end)
	{
		int mid = start + (end-start) / 2;
		if(arr[mid] == target)
		return 1;
		
		else if(arr[mid] > target)
		end = mid - 1;
		
		else
		start = mid + 1;
	}
	return 0;
}

int main()
{
	int arr[]={2,4,6,8,10,13,15};
	int t = 16;
	int n = sizeof(arr) / sizeof(int) ;
	if(binary_search(arr,n,t))
	cout<<"Search succesful";
	else
	cout<<"seach unsuccesful";
	
	return 0;
}
