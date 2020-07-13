#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll itr;
    cin>>itr;
    while(itr--){
        ll n, k, d=-1;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<pair<ll, ll>> v(n, make_pair(-1, -1));
        if(s[n-1]=='1')
            d = n-1;
        for(ll i=n-2;i>=0;i--){
            if(s[i]=='1')
                d = i;
            v[i].first = d;
        }
        d = -1;
        if(s[0]=='1')
            d = 0;
        for(ll i=1;i< n;i++){
            if(s[i]=='1')
                d = i;
            v[i].second = d;
        }
        ll ans = 0;
        for(ll i=0;i<n;i++){
            if(s[i]!='1'){
                if(v[i].first==-1 || (v[i].first==0 && v[i].first > i+k)){
                    if(v[i].second==-1){
                        ans++;
                        i+=k;
                    }
                    else{
                        if(v[i].second < i-k){
                            ans++;
                            i+=k;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}