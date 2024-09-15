#include<iostream>
using namespace std;
void printFabonacii(int n){
    int a=0,b=1;
    for(int i=0;i<n;i++){
        cout<<" "<<a;
        int c = a+b;
        a=b;
        b=c;
    }
     
}
int main(){
    int n;
    cout<<"Enter nth term:";
    cin>>n;
    printFabonacii(n);
    return 0;
}