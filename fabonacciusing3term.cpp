#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=1,c=2,sum=0;
    for(int i=0;i<n;i++){
        cout<<" "<<a;
        sum=a+b+c;
        a=b;
        b=c;
        c=sum;
    }
    return 0;
}

 