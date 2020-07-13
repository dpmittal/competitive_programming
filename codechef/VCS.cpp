#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n, m, k, l;
    cin>>n>>m>>k;
    vector<ll> ign, unt;
    for(ll i =0;i<m;i++){
      cin>>l;
      ign.push_back(l);
    }
    for(ll i =0;i<k;i++){
      cin>>l;
      unt.push_back(l);
    }
    ll u=0, b=0;
    for(ll i=1;i<=n;i++){
      if(find(ign.begin(), ign.end(), i)!=ign.end() && find(unt.begin(), unt.end(), i)!=unt.end())
        b++;
      else if(find(ign.begin(), ign.end(), i)==ign.end() && find(unt.begin(), unt.end(), i)==unt.end())
        u++;
    }
    cout<<b<<" "<<u<<endl;
  }
  return 0;
}
