#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n, k, v, l;
    cin>>n>>k>>v;
    ll s = v*(n+k);
    for(ll i=0;i<n;i++){
      cin>>l;
      s-=l;
    }
    if(s<k || s%k!=0)
      cout<<-1<<endl;
    else{
      ll ans = s/k;
      cout<<ans<<endl;
    }
  }
  return 0;
}
