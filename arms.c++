#include<iostream>
#include<math.h>
using namespace std;
void checkarmstrong(int n){
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
  cout<<"armstrong valid:";
  else
  cout<<"armstrong not valid:";
}
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	 checkarmstrong(n);
		
	return 0;
}
