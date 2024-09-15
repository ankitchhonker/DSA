#include<iostream>
using namespace std;
int main(){
	int edge,vertex;
    int i;
	
	cout<<"Enter the number of edge:";
	cin>>edge;
	cout<<"Enter the number of vertex:";
	cin>>vertex;
	//kausalaya dasrath ke nandan ram lalat pe sobhit chandan raghupat ki jay bole laksaman anjani putre pade hai saram me ram siya japte tann mann me mangal bhavan 
	//kausalya dasrath ke jnandan ram lalat pe sobhit chandan raghupat ki jay bole lakshman 
	//setting happy coding to alogn with to take  care of them along the side may along the side take care of them kausaualaya dasrath ke nandan 
	int u,v;
	vector<int>Adjlist;
	for(i=0; i<edge; i++){
		cin>>u>>v;
		Adjlist[i].push_back(u);
		Adjlist[i].push_back(v);
	}
	
	for(i=0; i<edge; i++){
		cout<<" "<<Adjlist[i];
		
	}
	
	
	
}
