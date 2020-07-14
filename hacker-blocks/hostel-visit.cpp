#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int q, k;
    cin>>q>>k;
    priority_queue<ll, vector<ll> > maxh;
    
    int qType;
    ll x,y;
    for(int i=0;i<q;i++){
        cin>>qType;
        switch(qType){
            case 1: cin>>x>>y;
                    maxh.push(x*x+y*y);
                    if(maxh.size() > k) maxh.pop();
                break;
                
            case 2: cout<<maxh.top()<<'\n';
                break;
        }
    }
    return 0;
}