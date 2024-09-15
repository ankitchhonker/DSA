#include<iostream>
using namespace std;
int checkpalind(string str, int s, int e){
	if(s>e)
	return 1;
	
	if(str[s]!=str[e])
	return 0;
	return checkpalind(str,s+1,e-1);
		
}
int main(){
	string str="nan";
	int s=0;
	int e=str.size()-1;
	cout<<checkpalind(str,s,e);
	
	return 0;
}
		
		
	
