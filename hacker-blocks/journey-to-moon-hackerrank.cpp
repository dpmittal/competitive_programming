#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
        Graph(int V){
            this->V = V;
            l = new list<int>[V];
        }

        void addEdge(int u, int v, bool bidir = true){
            l[u].push_back(v);
            if(bidir){
                l[v].push_back(u);
            }
        }

        int dfsVisit(int s, bool *visited){
            visited[s] = true;
            int cnt = 1;
            for(auto child: l[s]){
                if(!visited[child]){
                    cnt += dfsVisit(child, visited);
                }
            }

            return cnt;
        }

        int dfs(){
            bool *visited = new bool[V+1]{0};

            int ans = V*(V-1)/2;
            for(int i=0;i<V;i++){
                if(!visited[i]){
                    int cnt = dfsVisit(i, visited);
                    ans -= (cnt*(cnt-1)/2);
                }
            }

            return ans;
        }
};

int main(){

    int n,m;
    cin>>n>>m;
    Graph g(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        g.addEdge(x,y);
    }

    cout<<g.dfs()<<'\n';
    return 0;
}