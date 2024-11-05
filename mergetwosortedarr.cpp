#include<iostream>
#include<vector>
using namespace std;
void mergeArr(vector<int>arr1,vector<int>arr2){
    int i=0;
    int j=0;

  while(i<arr1.size() && j<arr2.size()){
       if(arr2[j]<=arr1[i])
    {
      arr1[i]=arr2[j];
      j++;
    } else{
        i++;
    }
     
  }
  i=0;
  while(i<arr1.size()){ 
    cout<<arr1[i];
    i++;
  }
}

int main(){
    vector<int>arr1;
    vector<int>arr2;
    arr1.push_back(1);
    arr2.push_back(2);
    arr1.push_back(3);
    arr2.push_back(4);
    arr1.push_back(5);
    mergeArr(arr1,arr2);
    return 0;
}