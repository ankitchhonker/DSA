#include<iostream>
using namespace std;
int peakmountain(int arr[], int n){
    int start=0;
    int end=n-1;
     
    while(start<=end){
        int mid=start+(end-start);
        if(  arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1] )
             return mid;
        
        else if(arr[mid]<arr[mid+1])
             start=mid+1;

        else
        end=mid-1;
    }

     
}
int main(){
    int arr[]={2,3,5,7,8,5,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<"peak element of an array:"<<peakmountain(arr,n);
    return 0;
}