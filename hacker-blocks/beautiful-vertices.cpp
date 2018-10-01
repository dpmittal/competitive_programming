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

        void addEdge(int u, int v, bool bidir=true){
            l[u].push_back(v);
            if(bidir){
                l[v].push_back(u);
            }
        }

        int bfsVisit(int s, bool *visited, int *parent, int *numChild){
            queue<int> q;
            visited[s]=true;
            q.push(s);
            int ctr=0;

            while(!q.empty()){
                int u=q.front();
                q.pop();
            
                for(auto child: l[u]){
                    if(!visited[child]){
                        visited[child]=true;
                        parent[child]=u;
                        numChild[u]++;
                        q.push(child);
                    }
                }

                if(numChild[u] > numChild[parent[u]]){
                    ctr++;
                }
            }

            return ctr;
        }

        int bfs(){
            bool *visited = new bool[V]{0};
            int *numChild = new int[V]{0};
            int *parent = new int[V+5];
            int ctr=0;

            for(int i=0;i<V;i++){
                if(!visited[i]){
                    parent[i]=i;
                    ctr += bfsVisit(i, visited, parent, numChild);        
                }
            }

            return ctr;
        }
};

int main(){

    int n,m;
    cin>>n>>m;
    int x,y;
    Graph g(n);

    for(int i=0;i<m;i++){
        cin>>x>>y;
        g.addEdge(x-1,y-1);
    }

    cout<<g.bfs()<<'\n';
    return 0;
}