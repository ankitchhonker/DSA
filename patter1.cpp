#include<iostream>
using namespace std;
void printpattern(int n){
	int i,j,k;
	
	for(i=1;i<=n;i++){
		 
		for(j=1;j<=n;j++){
			for(k=1;k<n-i;k++){
				cout<<" ";
			}
		cout<< "*";	   
		}
		cout<<endl;
	}
}
int main(){
	int n=4;
	printpattern(n);
	return 0;
}
