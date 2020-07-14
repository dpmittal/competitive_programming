#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<string, int> a, pair<string, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second > b.second;
}

int main(){

    int x;
    cin>>x;
    int n;
    cin>>n;
    pair<string, int> p[n];
    for(int i = 0; i < n; i++){
        cin>>p[i].first>>p[i].second;
    }

    sort(p, p + n, myCompare);

    for(int i = 0; i < n; i++){
        if(p[i].second >= x){
            cout<<p[i].first<<" "<<p[i].second<<'\n';
        }
    }
    return 0;
}