#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n;
    cin>>n;
    vector<ll> a;
    for(ll i=0;i<n;i++){
      ll k;
      cin>>k;
      a.push_back(k);
    }
    stable_sort(a.begin(), a.end());
    ll s=0;
    for(ll i=0;i<n;i++){
      if(i==(n-1))
        s+=a[i];
      else
        s+=(a[i]-1);
    }
    cout<<s<<endl;
  }
  return 0;
}
