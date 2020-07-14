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

ll kruskal(pair<int, pair<int, int> > p[], int n, int m)
{
    int *id = new int[n];
    for(int i=0;i<n;i++){
        id[i]=i;
    }

    int mstCost=0;

    for(int i=0;i<m;i++){
        int u=p[i].second.first;
        int v=p[i].second.second;

        if(root(u, id) != root(v, id)){
            mstCost += p[i].first;
            union1(u,v,id);
        }
    }

    return mstCost;
}

int main(){

    int n,m;
    cin>>n>>m;

    pair<int, pair<int, int> > *p=new pair<int, pair<int, int> >[n];

    for(int i=0;i<m;i++){
        int x,y,r;
        cin>>x>>y>>r;
        p[i] = make_pair(r, make_pair(x-1,y-1));
    }

    sort(p, p+m);

    cout<<kruskal(p, n, m)<<'\n';
    return 0;
}