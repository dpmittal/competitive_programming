#include<bits/stdc++.h>
using namespace std;

bool pairCompare(pair<int, int> a, pair <int, int> b){
    return a.second < b.second;
}

int main(){

    int n;
    cin>>n;
    pair<float, float> p[n];

    for(int i = 0; i < n; i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }

    //Greedy Algo
    sort(p, p + n, pairCompare);

    float currentTime = p[0].second;
    int num = 1;

    for(int i = 1; i < n; i++){
        if(p[i].first >= currentTime){
            currentTime = p[i].second;
            num++;
        }
    }

    cout<<num<<'\n';

    return 0;
}