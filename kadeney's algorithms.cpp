#include<iostream>
using namespace std;

int maxsubsum(int arr[],int n){
    int currsum =0;
    int maxsum =0;
    for(int i=0;i<n;i++){
        maxsum+=arr[i];
        if(maxsum>currsum)
         currsum = maxsum;
         else if(maxsum<0)
         maxsum=0;
    }
    return (currsum);
}

int main(){
    int arr[]={3,-2,1,4,-4,3};
    int n = sizeof(arr)/sizeof(int);
   int answer =  maxsubsum(arr,n);
   cout<<"Maximum of sub Array :"<<answer;
    return 0;
}