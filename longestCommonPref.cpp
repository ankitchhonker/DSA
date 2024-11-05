#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printString(string str,int s,int e){
      if(s>=e)
      return;
      printString(str,s+1,e);
      cout<<""<<str[s]<<endl;
      printString(str,s,e-1);
}
int main(){
     string arr="ankit";
    printString(arr,0,4);
    return 0;
} 