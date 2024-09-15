#include<iostream>
using namespace std;
int happy_num(int n){
	int res = 0 ;
	 while(n>0) {
	int d = n % 10 ;
	 res = res + d * d ;
	n = n / 10 ;
  }
  if(res==10 || res==100)
    return 1;
	
	
	return happy_num(res) ; 	
}

int main(){
	int num = 7 ;
	if(happy_num(num)==1)
	cout<<"Happy Number Valid:" ;
	else
	cout<< "Happy Number Valid:" ;
	return 0;
}
