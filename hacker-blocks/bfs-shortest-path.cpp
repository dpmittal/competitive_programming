#include<bits/stdc++.h>
using namespace std;
class graph{
    int V;
    list<int> *l;

    public:
        graph(int V){
            this->V = V;
            l = new list<int>[V];
        }

        void addEdge(int u, int v, bool bidir=true){
            l[u].push_back(v);

            if(bidir){
                l[v].push_back(u);
            }
        }

        int *bfs(int s){
            unordered_map<int, bool> visited;
            int *dist=new int[V];
            for(int i=0;i<V;i++){
                dist[i]=-1;
            }

            queue<int> q;
            q.push(s);
            visited[s]=true;
            dist[s]=0;
            
            while(!q.empty()){
                int u=q.front();
                q.pop();

                for(auto child: l[u]){
                    if(!visited[child]){
                        q.push(child);
                        visited[child]=true;
                        dist[child]=dist[u]+6;
                    }
                }
            }

            return dist;
        }
};

int main(){

    short q;
    cin>>q;
    while(q--){
        
        int n,m;
        cin>>n>>m;
        graph g(n);
        int u,v;

        for(int i=0;i<m;i++){
            cin>>u>>v;
            g.addEdge(u-1,v-1);
        }

        int s;
        cin>>s;

        int *d=g.bfs(s-1);

        for(int i=0;i<n;i++){
            if(i!=s-1){
                cout<<d[i]<<" ";
            }
        }

        cout<<'\n';
    }
    return 0;
}