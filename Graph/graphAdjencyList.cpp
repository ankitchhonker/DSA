#include<iostream>
#include<list>
#include<queue>
#include<vector>
using namespace std;
class Graph{
    int V;
    list<int> * l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdges(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void PrintGraph(){
        for(int u=0; u<V; u++){
            cout<<u":";
            list<int> neighbors = l[u];
            for(int v : neighbors){
                cout<<" "<<v;
            }
            cout<<endl;
        }
    }

    void bfs(){
        queue<int>q;
        vector<bool>visited(V,false);
        q.push(0);
        visited[0]=true;
        while(q.size()>0){
            int u = q.front();
            if(visited[u]!=true)
            {
                visited[u] = true;
                   q.pop();
            }
            cout<<u<<" ";
          
            list<int>neighbors =l[u];
            for(int v:neighbors){
                cout<<v<<" ";
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

    graph.PrintGraph();
    return 0;
}