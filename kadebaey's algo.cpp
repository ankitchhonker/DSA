#include<iostream>
using namespace std;
int findmaxsum(int arr[], int n){
    int crsum=0;
    int maxsum=0;
    for(int i=0;i<n;i++){
        maxsum+=arr[i];
     
        if(maxsum>crsum)
         crsum=maxsum;
         else if(maxsum<0)
         maxsum=0;  
	}    
    return (crsum);    
    }

int main(){
    int arr[]={2,3,-4,-5,3,2,3,1};
    int n=sizeof(arr)/sizeof(int);
    int answer = findmaxsum(arr,n);
    cout<<"Maximum of sub array:"<<answer;
    return 0;
}
