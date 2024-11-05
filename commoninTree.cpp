#include<iostream>
#include<vector>
using namespace std;
vector<int> FindCommon(vector<int>&arr1,vector<int>&arr2,vector<int>&arr3){
     
    int n1=arr1.size();
    int n2=arr2.size();
    int n3=arr3.size();
 
    int f=0,s=0,t=0;
    vector<int>ans;
    while (f<n1 && s<n2 && t<n3){
       if(arr1[f]==arr2[s]&&arr2[s]==arr3[t])
       {
         
        ans.push_back(arr1[f]);
        f++;s++;t++;
        
       } else if((arr1[f]<arr2[s]) && (arr1[f]<arr3[t])){
        f++;
        
       } else if((arr2[s]<arr1[f]) && (arr2[s]<arr3[t])){
        s++;
       } else if(arr3[t]<arr1[f]&&arr3[t]<arr2[s]) {
          
        t++;
       }
    }
        
   return ans;
    

}
int main(){
    vector<int>arr1={1,2,3,4,5};
    vector<int>arr2={4,5,6,7};
    vector<int>arr3={4,5,8,9};
    vector<int>ans=FindCommon(arr1,arr2,arr3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}