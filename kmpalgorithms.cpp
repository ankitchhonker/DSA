#include<iostream>
#include<vector>
#include<string> 
int kmpalgorithm(string s){
	vector<int>lps(s.size(),0);
	int pre=0,suff=1;
	
	while(suff<s.size()){
		//if string matched..
		if(s[pre]==s[suff]){
			lps[suff]=pre+1;
			pre++;
			suff++;
		}
		//if string does not matched.. 
		else
		if(pre==0){//Nested if preffix is locate on 0 location than intialized lps with zero ..
			lps[suff]=0;
			suff++;
		}
		else//else perffix does not locate on oth position preffix set on lps[pre-1]..
		pre=lps[pre-1];
		
	}
	return (lps[s.size()-1]);
	
}

int main(){
	string s = "abcanktiwabcantiw" ;
	cout<<kmpalgorithm(s);
	return 0;
}
