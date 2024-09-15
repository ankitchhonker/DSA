#include<iostream>
using namespace std;
int climbstair(int n){
	if (n==1||n==2)
	 return n;
	 
	 return climbstair(n-1)+climbstair(n-2);
	 
}
int main(){
	int n=5;
	cout<<"total number of ways to reach at to of stair:"<<climbstair(n);
	return 0;
}
