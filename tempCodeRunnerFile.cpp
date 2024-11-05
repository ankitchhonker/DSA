#include<iostream>
#include<vector>
#include<string>
using namespace std;
int maxLenSubStr(string s){
    int second=0;
    int first=0;
    int maxLen=0;
    vector<int>visit(256,0);
    while(second<s.length()){
        while(visit[s[second]]){
          visit[s[first]]=0;
          first++;
        }
        visit[s[second]]=1;
     maxLen=max(maxLen,second-first+1);
     second++;
    }
    return maxLen;
}
int main(){
    string s="abcda";
    cout<<maxLenSubStr(s);
    return 0;
}