#include<iostream>
using namespace std;
int findmaxsum(int arr[], int n){
    int crsum=0;
    int maxsum=0;
    
    for(int i=0;i<n;i++){
        maxsum+=arr[i];
        
        if(maxsum > crsum)
            crsum=maxsum;
        
        else if(maxsum < 0)
        maxsum=0;
    }
    return (crsum);
}
int main(){
    int arr[]={2,-1,3,-3,1,-2,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Maximum of sub array:"<<findmaxsum(arr,n);

    return 0;
}
