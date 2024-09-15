#include<iostream>
#include<cmath>
using namespace std;
int  checkarmstrong(int n){
	int n1,n2,sum=0,power,l,count;
	n1=n;
	n2=n;
  while(n1>0){
  	count++;
  	n1/=10;
  }	
  while(n2>0){
  	l=n2%10;
  	power=pow(l,count);
  	sum+=power;
  	n2/=10;
  }
  if(sum==n)
   return  (n);
}

void printarstrong(int n, int m){
	int i;
	for(i=n;i<=m;i++){
		cout<<" "<<checkarmstrong(i);
	}
}
int main(){
	int n,m;
	cout<<"enter number:";
	cin>>n;
	cout<<" enter second number to armstrong number betwen two numbers:";
	cin>>m;
	  
	printarstrong(n,m);	
	return 0;
}
