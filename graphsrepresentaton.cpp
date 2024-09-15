#include<iostream>
using namespace std;
int main(){
	int edges,vertex;
	cout<<"Enter the number of edges and vertex:";
	cin>>vertex>>edges;
	int i,j;
	int u,v;
	 int AdjMat[vertex][vertex];
	 for(i=0;i<vertex;i++){
	 	for(j=0;j<vertex;j++){
	 			AdjMat[i][j]=0;
		 }
	 }
	 
	for(i=0; i<vertex; i++){
		cin>>u>>v;
		AdjMat[u][v] = 1;
		AdjMat[v][u] = 1;
	}
	
	for(i=0; i<vertex; i++){
		for(j=0; j<vertex; j++){
			cout<<" "<<AdjMat[i][j];
		}
		cout<<"\n";
	}
	
}
