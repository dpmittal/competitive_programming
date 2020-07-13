#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n, l;
    cin>>n;
    vector<ll> nos;
    for(ll i =0;i<n;i++){
      cin>>l;
      nos.push_back(l);
    }
    ll s=n;
    for(ll i=0;i<n;i++){
      ll s1 = nos[i];
      ll pro1 = nos[i];
      for(ll j=i+1;j<n;j++){
        s1+=nos[j];
        pro1*=nos[j];
        if(s1==pro1)
          s++;
      }
    }
    cout<<s<<endl;
  }
  return 0;
}
