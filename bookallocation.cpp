#include<iostream>
#include<vector>
 
using namespace std;

int minPages(vector<int>arr, int m){
    int start = 0;
    int end = 0;
    int ans ;
    for(int i=0; i<arr.size(); i++){
        end += arr[i];
        //find max value from the array
        if(arr[i]>start)
       start = arr[i];
    }

  while(start<=end){
        int pages = 0;
        int count = 1;
        int mid = start + (end - start) /2;
        for(int i=0; i<arr.size(); i++)
        {
            pages += arr[i];
        if(pages > mid)
        {
            count++;
            pages = arr[i];
        }
        }
        if(count<=m){
            ans = pages;
            end = mid -1;
        }
         
    }
    return ans;
    
}