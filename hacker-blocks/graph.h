#include<bits/stdc++.h>
using namespace std;

class Graph{

    unordered_map<char, list<char> > m;
    public: 
        
        void addEdge(char u, char v, bool bidir=true){
            m[u].push_back(v);

            if(bidir){
                m[v].push_back(u);
            }
        }

        int dfsVisit(char s, unordered_map<char, bool> &visited){
            
            static int ctr = 0;
            visited[s] = true;
            ctr++;

            for(auto child: m[s]){
                if(!visited[child]){
                    dfsVisit(child, visited);
                }
            }

            return ctr;
        }

        int dfs(char s){
            unordered_map<char, bool> visited;
            int res=0;
            for(auto it=visited.begin(); it!=visited.end();it++){
                if(!visited[s])
                    res += dfsVisit(s, visited);
            }

            return res;
        }
};      
