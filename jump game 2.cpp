#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int jump( int nums[], int n) {
        int jump=0,i;
        for(i=0;i<n ;i++){
            if(nums[i]  >= nums[i+1]){
                jump++;
                i=nums[i+1];
            }
            else
            i=nums[i];
            jump++;
             
        }
        return (jump);
    }
}pbj;

int main(){
	int arr[]={2,3,1,1,4};
	int n=sizeof(arr)/ sizeof(int);
cout<<pbj.jump(arr,n);	
}
