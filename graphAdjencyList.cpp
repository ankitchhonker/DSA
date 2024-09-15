#include<iostream>
#include<list>
using namespace std;
class Graph{
    int V;
    list<int>* l;
    public:
    Graph(int V)
    {
      this->V = V;
      l = new list<int> [V];
    } 

    void addEdges(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    //directed graph..
    // void addEdges(int u, int v){
    //     l[u].push_back(v);
    // }

    void print(){
        for(int u=0; u<V; u++){
            list<int> neighbours = l[u];
            cout<<u<<":";
            for(int v : neighbours){
                cout<<" "<<v;
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph graph(5);
    graph.addEdges(0,1);
    graph.addEdges(1,2);
    graph.addEdges(1,3);
    graph.addEdges(2,3);
    graph.addEdges(2,4);

    graph.print();
}