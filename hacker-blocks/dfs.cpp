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

        void dfsVisit(char s, unordered_map<char, bool> &visited){
            visited[s] = true;
            cout<<s<<" ";

            for(auto child: m[s]){
                if(!visited[child]){
                    dfsVisit(child, visited);
                }
            }
        }

        void dfs(char s){
            unordered_map<char, bool> visited;
            dfsVisit(s, visited);
        }

        bool checkCyclicHelper(char s, unordered_map<char, bool> &visited, unordered_map<char, char> &parent){
            visited[s] = true;

            for(auto child: m[s]){
                if(visited[child] and child!=parent[s]){
                    return true;
                }

                else if(!visited[child]){
                    parent[child]=s;
                    bool restIsCyclic = checkCyclicHelper(child, visited, parent);
                    if(restIsCyclic){
                        return true;
                    }
                }
            }

            return false;
        }

        bool checkCycle(char s){
            unordered_map<char, bool> visited;
            unordered_map<char, char> parent;
            parent[s] = '\0';

            return checkCyclicHelper(s, visited, parent);
        }
};

int main(){

    Graph g;

    g.addEdge('A', 'F');
    g.addEdge('A', 'B');
    //g.addEdge('B', 'E');
    g.addEdge('B', 'C');
    g.addEdge('C', 'D');
    g.addEdge('E', 'C');

    g.dfs('A');

    cout<<'\n';
    if(g.checkCycle('A')){
        cout<<"Cyclic\n";
    }

    else{
        cout<<"Not cyclic\n";
    }
    return 0;
}