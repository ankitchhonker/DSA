 //sort the intervals
 //agle wale interval s pichle wale interval ke compare karo if previes interval is greater than to next set the prev interval to
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 vector<vector<int>> mergeIntervals(vector<vector<int>>&nums){
    sort(nums.begin(),nums.end());
    vector<int>row(2);
    vector<vector<int>>ans;
    row=nums[0];
    
    for(int i=1;i<nums.size();i++){
        if(row[1]>=nums[i][0]){
         row[1]=max(row[1],nums[i][1]);
        } else{
            ans.push_back(row);
            row=nums[i];
        }
    }
    ans.push_back(row);
     
    return ans;
    

 } 

 int main(){
    vector<vector<int>>Intervals={{1,2},{2,4},{4,5},{6,9},{1,2}};
   vector<vector<int>>ans= mergeIntervals(Intervals);
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
 }
 return 0;
 }