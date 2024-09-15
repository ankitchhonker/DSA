#include<iostream>
using namespace std;
int powertwo(int n){
	int ans=0;
	  while(n>0){
     ans+=(n&n-1);
	  n=n>>1;
}
if(ans==1)
return 1;
 
}
int main(){
	int num=16;
	if(powertwo(num))
		cout<<"power two valid:"<<endl;
	else
	cout<<"power two not valid:";
	
	return 0;
	
}
