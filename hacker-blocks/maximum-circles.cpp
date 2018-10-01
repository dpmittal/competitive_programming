#include<bits/stdc++.h>
using namespace std;

bool pairCompare(pair<int, int> a, pair <int, int> b){
    return a.second < b.second;
}

int main(){

    int n;
    cin>>n;
    pair<int, int> p[n];
    int c, r;

    for(int i = 0; i < n; i++){
        cin>>c>>r;
        p[i].first = c - r;
        p[i].second = c + r;
    }

    //Greedy Algo
    sort(p, p + n, pairCompare);

    int currentPos = p[0].second;
    int num = 1;

    for(int i = 1; i < n; i++){
        if(p[i].first >= currentPos){
            currentPos = p[i].second;
            num++;
        }
    }

    cout<<n - num<<'\n';

    return 0;
}