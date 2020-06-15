#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll main(){
    ll itr;
    cin>>itr;
    while(itr--){
        ll n,m;
        cin>>n>>m;
            vector<vector<ll>> v(n,vector<ll>(m,0));
            for(ll i=0;i<n;i++){
                for(ll j=0;j<m;j++){
                    cin>>v[i][j];
                }
            }
            if(n>m){
                vector<vector<ll>> v2;
                for(ll i=0;i<m;i++){
                    vector<ll> dum;
                    for(ll j=0;j<n;j++){
                        dum.push_back(v[j][i]);
                    }
                    v2.push_back(dum);
                }
            v=v2;
            swap(n,m);
            }
            vector<pii> dp,dp2;
            ll s= n+m-1;
            ll mid=s/2;
            ll ans=0;
            for(ll i=0;i<mid;i++)
            {
                    ll a=0,b=0;
                    ll x=0,y=i;
                    while(x<n&&y>=0)
                    {
                        if(v[x][y]==0)
                            a++;
                        else b++;
                x++;
                y--;
            }
            dp.push_back({a,b});
        }
        ll h=0;
        for(ll i=m-1;i>=(m-mid);i--){
            ll a=0,b=0;
            ll x=n-1,y=i;
            while(x>=0&&y<m)
            {
                if(v[x][y]==0)
                    a++;
                else 
                    b++;
                x--;
                y++;
            }
            ans=ans+min(a+dp[h].first,b+dp[h].second);
            h++;    
        }
        cout<<ans<<endl;
    }
    return 0;
}