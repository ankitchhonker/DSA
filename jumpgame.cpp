#include<iostream>
#include<vector>
using namespace std;
int JumpGame(vector<int>&nums){
  int maxReach=nums[0];
  int steps=nums[0];
  int jump=1;
  for(int i=0;i<nums.size();i++){
    if(nums[0]==0)
    return -1;
    if(nums.size()-1==i)
    return jump;
    if(steps==i)
    {
      jump++;
    }
    steps--;

    steps=maxReach-i;
  }
  return -1;
  
}