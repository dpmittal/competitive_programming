#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n,x,m;
        cin>>n>>x>>m;
        ll s = x;
        ll e = x;
        while(m--)
        {
            ll l, r;
            cin>>l>>r;
            if((l<=s || l<=e) && (r>=s || r>=e)){
                s = min(l, s);
                e = max(r, e);
            }
        }
        cout<<e-s+1<<endl;
    }
    return 0;
}