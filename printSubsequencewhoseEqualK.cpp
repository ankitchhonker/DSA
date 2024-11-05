#include<iostream>
#include<vector>
 using namespace std;
void subSequence(vector<int>&nums,int ind,vector<int>&temp,vector<int>&ans,int n){
 if(ind==n){
    int sum=0;
    for(int i=0;i<temp.size();i++)
    cout<<temp[i];
    cout<<endl;
     for(int i=0;i<temp.size();i++)
      sum+=temp[i];
      ans.push_back(sum);
     return;

 }
 subSequence(nums,ind+1,temp,ans,n);
 temp.push_back(nums[ind]);
 subSequence(nums,ind+1,temp,ans,n);
 temp.pop_back();
}

int main(){
    vector<int>arr={1,2,3};
    vector<int>temp;
    vector<int>ans;
    subSequence(arr,0,temp,ans,3);
    for(int i:ans)
    cout<<i<<" ";
    return 0;
}