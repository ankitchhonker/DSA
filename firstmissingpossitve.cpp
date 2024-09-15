#include<iostream>
using namespace std;

int minofpostive(int arr[], int n)
{
	int ans = INT_MAX;
	int i = 0;
	while(i<n){
		if(arr[i]>0){
		 if(arr[i]<ans)
	    	ans = arr[i];
		}
	i++;
	}
	return ans;
}
 int numberPossitive(int arr[], int n)
 {
 	int i =0;
 	int  count = 0;
 	while(i<n){
 		if(arr[i]>0)
 		count++:
	 }
	 return count;
 }
 
 int number Negative(int arr[], int n)
 {
 	int i =0;
 	int  count = 0;
 	while(i<n){
 		if(arr[i]<0)
 		count++:
	 }
	 return count;
 }
 
 int sumofpossitive(int arr[], int n){
 	int i = 0;
 	int sum = 0;
 	while(i<n){
 		sum += arr[i];
	 }
	 return sum;
 }
 

int firstMissing(int arr[], int n){
	int max = INT_MIN ;
	int ans ;
	int mop =   minofpostive(arr,n);
	int np = numberPossitive(arr),n;
	int nn = numberNegative(arr,n);
	int sop = sumofpossitive(arr,n);
	
	if(mop!=1)
	return 1;
	
	n = n * (n+1) ;
	 	 = n - np;
	
	
	
	return ans ;
}
