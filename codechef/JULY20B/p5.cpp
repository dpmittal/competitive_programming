#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        cin>>n;
        ll l;
        ll mi = LONG_MAX;
        unordered_map<ll, ll> a_m, b_m, super;
        for(int i=0;i<n;i++){
            cin>>l;
            mi=min(l, mi);
            a_m[l]++;
            super[l]++;
        }
        for(int i=0;i<n;i++){
            cin>>l;
            mi = min(l, mi);
            b_m[l]++;
            super[l]++;
        }
        ll ans = 0;
        bool flag = true;
        vector<ll> a_c, b_c;
        for(auto i = super.begin();i!=super.end();i++){
            if((a_m[i->first]+b_m[i->first])%2!=0){
                flag = false;
                break;
            }
            if(a_m[i->first]!=b_m[i->first]){
                ll diff = abs(a_m[i->first]-b_m[i->first]);
                if(a_m[i->first]>b_m[i->first])
                   for(ll j=0;j<(diff+1)/2;j++){
                       b_c.push_back(i->first);
                   }
                else
                    for(ll j=0;j<(diff+1)/2;j++){
                       a_c.push_back(i->first);
                    }
            }
        }
        if(flag){
            ll len = a_c.size();
            sort(a_c.begin(), a_c.end());
            sort(b_c.begin(), b_c.end());
            for(ll i=0;i<len;i++){
                ans+=min(mi*2, min(a_c[i], b_c[len-i-1]));
            }
            cout<<ans<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}