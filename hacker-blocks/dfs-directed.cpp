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

        bool isCyclicHelper(char s, unordered_map<char, bool> &visited, unordered_map<char, char> ancestor){
            visited[s] = true;
            ancestor[s] = true;

            for(auto child: m[s]){
                if(!visited[child]){
                    bool restIsCyclic = isCyclicHelper(child, visited, ancestor);
                    if(restIsCyclic){
                        return true;
                    }
                }

                else if(visited[child] and ancestor[child]){
                    return true;
                }
            }

            //Backtrack
            ancestor[s] = false;
            return false;
        }

        bool isCyclicDirected(char s){
            unordered_map<char, bool> visited;
            unordered_map<char, char> ancestor;

            return isCyclicHelper(s, visited, ancestor);
        }
};

int main(){

    Graph g;

    g.addEdge('A', 'B', false);
    g.addEdge('A', 'G', false);
    g.addEdge('A', 'F', false);
    g.addEdge('B', 'D', false);
    g.addEdge('D', 'F', false);
    g.addEdge('B', 'C', false);
    g.addEdge('F', 'B', false);
    g.addEdge('F', 'G', false);

    g.dfs('A');

    cout<<'\n';

    if(g.isCyclicDirected('A')){
        cout<<"Cyclic\n";
    }

    else{
        cout<<"Not Cyclic\n";
    }

    return 0;
}