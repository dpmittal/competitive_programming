#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n, k;
    cin>>n;
    vector<ll> l, r;
    for(ll i=0;i<n;i++){
      cin>>k;
      l.push_back(k);
    }
    for(ll i=0;i<n;i++){
      cin>>k;
      r.push_back(k);
    }
    ll ma=LONG_MIN, ri=0, li=0, ans =0;
    for(ll i=0;i<n;i++){
      if((l[i]*r[i])>ma){
        ma = l[i]*r[i];
        ri = r[i];
        li = l[i];
        ans = i+1;
      }
      else if((l[i]*r[i])==ma)
      {
        if(r[i]>ri)
        {
          ri = r[i];
          li = l[i];
          ans = i+1;
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
