#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int root(int x, int id[])
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(int x, int y, int id[])
{
    int p = root(x, id);
    int q = root(y, id);
    id[p] = id[q];
}

bool myCompare(pair<ll, pair<int, int> > a, pair<ll, pair<int, int> > b){
    return a.first < b.first;
}

int main(){

    int n,m;
    cin>>n>>m;
    ll s;
    cin>>s;

    pair<ll, pair<int, int> > p[m];
    for(int i=0;i<m;i++){
        int u,v;
        ll c;
        cin>>u>>v>>c;
        p[i] = make_pair(c, make_pair(u-1, v-1));
    }

    //Kruskal's algorithm
    sort(p,p+m,myCompare);
    ll mstCost=0;
    int ctr=0;

    int *id = new int[n];
    for(int i=0;i<n;i++){
        id[i]=i;
    }

    int i=0;
    
    while(mstCost<=s && i<m){

        int u=p[i].second.first;
        int v=p[i].second.second;

        if(root(u, id) != root(v, id)){
            union1(u,v,id);
        }

        else{
            if(mstCost+p[i].first<=s){
                ctr++;
                mstCost+=p[i].first;
            }

            else{
                break;
            }
        }
        i++;
        cout<<mstCost<<" "<<ctr<<"\n";
    }

    cout<<ctr<<" "<<mstCost<<"\n";
    return 0;
}