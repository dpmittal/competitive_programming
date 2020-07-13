#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll> pos;
        for(ll i=0;i<n;i++){
            if(s[i]=='1')
                pos.push_back(i);
        }
        ll count = 0;
        ll l = pos.size();
        ll ans = 0;
        if(l==0){
            ans = n/(k+1);
            if(n%(k+1)!=0)
                ans++;
        }
        else if(l==1)
            ans = ((pos[0])/(k+1)) + ((n-pos[0]-1)/(k+1)); 
        else{
            for(ll i=0;i<l;i++){
                if(i==0)
                    ans+=((pos[i])/(k+1));
                else{
                    ans+= ((pos[i]-pos[i-1]-1)/(2*k+1));
                    if(i==(l-1))
                        ans+=((n-pos[i]-1)/(k+1));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}