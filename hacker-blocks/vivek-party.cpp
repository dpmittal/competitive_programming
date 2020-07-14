#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
        Graph(int V){
            this->V=V;
            l=new list<int>[V];
        }

        void addEdge(int u, int v){
            l[u].push_back(v);
        }

        int dfsVisit(int s, bool *visited){
            visited[s]=true;
            int componentSize=1;

            for(auto child: l[s]){
                if(!visited[child]){
                    visited[child]=true;
                    componentSize += dfsVisit(child, visited);;
                }
            }

            return componentSize;
        }

        int dfs(){
            bool *visited=new bool[V];
            int minfriends=INT_MAX;

            for(int i=0;i<V;i++){
                if(!visited[i]){
                    minfriends=min(minfriends, dfsVisit(i, visited));
                }
            }   
            return minfriends;
        }
};

int main(){

    int n,d;
    cin>>n>>d;
    int a,b;
    Graph g(n);

    for(int i=0;i<d;i++){
        cin>>a>>b;
        g.addEdge(a-1,b-1);
    }

    cout<<g.dfs()<<'\n';
    return 0;
}