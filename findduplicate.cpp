#include<iostream>
#include<vector>
using namespace std;
 
 int findDuplicate(vector<int>&nums){
  int fast=nums[nums[0]];
  int slow=nums[0];
  //detect the loop.. here i rabit and turtoise where 
  while(fast!=slow){
	slow=nums[slow];
	fast=nums[nums[fast]];
  }

//find the number that is create the loop
  slow=0;
  while(slow!=fast){
	slow=nums[slow];
	fast=nums[fast];
  }

  return fast;
 }

 int main(){
	vector<int>nums={1,4,5,2,1,3};
	int ans = findDuplicate(nums);
	cout<<"Duplicate :"<<ans;
	return 0;
 }