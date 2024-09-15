#include<iostream>
using namespace std;
int findgcd(int a , int b){
	if(b==0)
	return a ;
	 
	 return findgcd(b,a%b) ;
}
//time and space complexities for this algorithm is O(1)..

int main(){
	
	int n= 18;
	int m= 48;
	 cout<<"gcd:"<<findgcd(n,m);
	 return 0;
	 
}
