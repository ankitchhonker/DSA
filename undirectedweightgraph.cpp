#include<iostream>
#include<list>
using namespace  std;
class Graph{
    int V;
    list<pair<int,int>>*l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<pair<int,int>> [V];
    }

    void addEdges(int u , int v, int w){
        l[u].push_back({v,w});
        l[v].push_back({u,w});
    }

    void Print(){
        for(int u=0; u<V; u++){
            list<pair<int,int>> neighbours = l[u];
            cout<<u<<":";
           
        }
    }
};