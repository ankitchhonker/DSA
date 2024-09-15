#include<iostream>
using namespace std;

int peakmountain(int arr[], int n){
    int start=0;
    int end=n-1;
     //using binary search find peak element in an array......
    while(start<=end){
        int mid=end+(start-end);
        if(  arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1] )
             return mid;
             
        
        else if(arr[mid]<arr[mid+1])
             start=mid+1;

        else
        end=mid-1;
    }
  
     
}


int main(){
    int arr[]={7,8,9,10,11,19,70,1,2};
    int n=sizeof(arr)/sizeof(int);
      
      cout<<"peak mountain:"<<peakmountain(arr,n);
    return 0;
}
