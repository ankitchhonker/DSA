#include<iostream>
#include<vector>
using namespace std;

void reverse(string &s,int start,int end){
    while(start<=end){
       swap(s[start],s[end]);
       start++,end--;
    }
}

void wordRev(string &s){
reverse(s,0,s.length()-1);
}

int main(){
    string s = "";
    reverse(s,0,s.length()-1);
    int i=0;
    int start=0;
     while(i<s.length()){
       if(s[i+1]=='.'||i==s.length()-1){
           reverse(s,start,i);
           start=i+2;
       }
       i++;
      }
      
     cout<<s;
    return 0;
}
