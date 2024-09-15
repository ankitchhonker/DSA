#include<iostream>
using namespace std;
void printfab(int n){
	int a=0,b=1,c;
	for(int i=0;i<n;i++){
		c=a+b;
		cout<<" "<<b;
		 a=c;
		b=a;
		  
		 
	}
	
}
int main(){
	int n=6;
	printfab(n);
	return 0;
}
