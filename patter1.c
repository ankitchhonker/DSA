#include<iostream>
using namespace std;
void printpattern(int n){
	int i,j;
	int space=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			space=n-i-1;
			cout<<" "<<space;
		}
	 
	for(i=0;i<n;i++){
		 
	}
}
int main(){
	int n=4;
	printpattern(n);
	return 0;
}
