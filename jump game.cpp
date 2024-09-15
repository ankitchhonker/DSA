#include<iostream>
using namespace std;		
class Solution {
public:
    bool canJump( int nums[],int n) {
        int j=0;
        for(j=1;j< n;j++){
            if(nums[j]==0 && nums[j-1]==1)
            return false;
            else
            j+=nums[j];
        }
         
    return true;}
};
int main(){
	Solution obj;
 int  arr[]={3,2,1,0,2};
 int n=sizeof(arr)/sizeof(int);
	
	cout<<obj.canJump(arr,n);
	return 0;
	
}
