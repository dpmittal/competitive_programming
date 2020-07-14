#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Graph{

    int V;
    list<pair<int, int> > *l;

    public:
        Graph(int V){
            this->V = V;
            l=new list<pair<int, int> >[V];
        }

        void addEdge(int u, int v, int wt, bool bidir=true){
            l[u].push_back(make_pair(v, wt));

            if(bidir){
                l[v].push_back(make_pair(u, wt));
            }
        }

        int dfsVisit(int s, bool *visited, ll &cost){
            visited[s]=true;
            int cnt=1;

            for(auto childPair: l[s]){
                int child=childPair.first;
                int wt=childPair.second;

                if(!visited[child]){
                    int subtreeSize = dfsVisit(child, visited, cost);
                    cnt+=subtreeSize;
                    int x=subtreeSize;
                    int y=V-x;
                    cost += 2*(min(x, y))*wt;
                }
            }
            return cnt;
        }

        ll dfs(int src){
            ll cost=0;
            bool *visited=new bool[V]{0};
            
            dfsVisit(src, visited, cost);
            return cost;
        }
};

int main(){

    short t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;
        cin>>n;
        Graph g(n);
        
        for(int i=0;i<n-1;i++){
            int x,y,z;
            cin>>x>>y>>z;

            g.addEdge(x-1,y-1,z);
        }

        cout<<"Case #"<<k<<": "<<g.dfs(0)<<'\n';
    }
    return 0;
}