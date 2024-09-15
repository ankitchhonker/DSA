#include<iostream>
#include<vector>
using namespace std;
 void  plus_one( vector<int> arr,int n ){
	 int last =  n-1 ;
	 int i;
	 arr[last] = arr[last] + 1;
	 if(arr[last]>9){
	 	
	 while(arr[last]>0){
	 	int d = arr[last] / 10 ;
	 	arr.push_back(d) ;
	 	arr[last] = arr[last] / 10 ;
	 	
	 }
   }
     
  for(i=0;i<n;i++)
 cout<<" "<<arr[i] ;
}
int main(){
	vector <int> arr(4);
	arr.push_back(2) ;
	arr.push_back(5) ;
	arr.push_back(7) ;
	arr.push_back(9) ;
	
	int n=arr.size() ;
	plus_one(arr,n);
	return 0;
}
