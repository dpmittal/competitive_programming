#include<bits/stdc++.h>
using namespace std;

bool canReach(vector<int>& stones){
    unordered_map<int, set<int> > m;
    for(int i=0;i<stones.size();i++){
        m[stones[i]] = set<int>();
    }

    m[1].insert(1);
    int unit;
    for(int i= 1; i< stones.size()-1;i++){
        unit = stones[i];
        for(auto l: m[unit]){
            if(l - 1){
                if(m.count(unit + l - 1)){
                    m[unit + l - 1].insert(l-1);
                }
            }

            if(l + 1){
                if(m.count(unit + l + 1)){
                    m[unit+l+1].insert(l+1);
                }
            }
        }
    }

    for(int i=0;i<stones.size();i++){
        int stone = stones[i];
        cout<<stone<<"->";
        for(auto l: m[stone]){
            cout<<l<<", ";
        }
        cout<<"\n";
    }
    
    cout<<"\n";
    return !m[unit].empty();
}

int main(){

    vector<int> stones;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        stones.push_back(a);
    }

    canReach(stones) ? cout<<"Yes\n" : cout<<"No\n";
    return 0;
}