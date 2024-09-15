#include<iostream>
using namespace std;
int checkprime(int n){
	int i;
	int count=0;
	if(n<2){
		return 1;
	}
	for(i=2;i<n;i++){
		 
		if(n%i==0)
		 count++;
 
	if(count==0)
	return count;
	}
}
void printprime(int n, int m){
	int i;
   for(i=n;i<=m;i++){
   	cout<<" "<<checkprime(i);
   }	
	
}

int main(){
	int n,m;
	cout<<"enter number to print middle prime numbers:";
	cin>>n>>m;
	printprime(n,m);
	return 0;
}
