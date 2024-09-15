#include<iostream>
#include<vector>
 using namespace std;
 string mergestring(string s1, string s2){
    int i;
    int j=0;
     for ( i = s1.size() ; i <s1.size()+s2.size() ; i++)
     {
         s1[i]=s2[j];
         j++;
     }
     s1[i]='\0';
return s1;
     
 }
 int main(){
    string str1="ankit";
    string str2="thakur";
    
    cout<< mergestring(str1,str2);
    return 0;
 }
