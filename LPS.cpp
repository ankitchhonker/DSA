#include<iostream>
#include<vector>
using namespace std;

class solution{
	public :
int LPS(string s){
	int ans=0,prefix=0 ;
	int p1=0,p2=1 ;
	
	while( p2 < s.size() ){
		if( s[p1 ]== s[p2]){
			++ p1 ;
			++ p2 ;
		}
		else{
  		++ p2 ;
  	}
	
	
	}
	return (p1) ;
}
} obj, *ptr;

int main(){
	ptr =& obj;
	string s = "abcshabcd" ;
	cout<< ptr-> LPS(s) ;
	return 0 ;
}


