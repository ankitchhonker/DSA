#include<iostream>
using namespace std;
int coutbit(int n){
	int ans=0;
	while(n>0){
		if(n&1)
		ans++;
		n=n>>1;
	}
	return (ans);
}
int main(){
	int n=16;
	cout<<" number of bits:"<<coutbit(n);
	return 0;
}
