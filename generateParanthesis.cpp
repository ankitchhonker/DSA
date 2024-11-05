#include<iostream>
#include<vector>
using namespace std;
void GenerateParan(int n,int left,int right, vector<string>&ans,string temp){
   if(left+right==2*n){
    for(int i=0;i<temp.length();i++)
    cout<<temp[i];
    cout<<endl;
    return;
   }
 if(left<n){
    temp.push_back('(');
    GenerateParan(n,left+1,right,ans,temp);
    temp.pop_back();
 } if(right<left){
    temp.push_back(')');
    GenerateParan(n,left,right+1,ans,temp);
     }

}

int main(){
    vector<string>ans;
    string temp;
    int n=3;
    GenerateParan(n,0,0,ans,temp);
     return 0;
}