#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    string s;
    cin>>s;
    ll occ[26] = {0};
    for(ll i =0; i<s.length();i++){
      occ[s[i]-65]++;
    }
    vector<ll> res, div;
    ll su = 0, c=0, flag=1;
    for(ll i=0;i<26;i++){
      if(occ[i]>0) {
        res.push_back(occ[i]);
        su+=occ[i];
        if(occ[i]!=1)
          flag=0;
      }
    }
    if (res.size()==1 || flag==1)
      cout<<0<<endl;
    else {
      for(ll i=1;i<=sqrt(su);i++){
        if(su%i==0){
          if(i<=26){
            div.push_back(su/i);
            c++;
          }
          if((su/i)<=26){
            div.push_back(i);
            c++;
        }
        }
      }
      stable_sort(div.begin(), div.end());
      ll ans = LONG_MAX;
      for(ll i=0;i<c;i++){
        ll cu = 0, k, count = 0;
        vector<ll> anss;
        for(ll j=0;j<res.size();j++){
          k= abs(div[i]-res[j]);
          if(k==0)
            count++;
          anss.push_back(k);
          // cout<<k<<" "<<j<<endl;
        }
        stable_sort(anss.begin(), anss.end());
        for(ll j=0;i<=(su/div[i]);i++){
          cu+=anss[i];
        }
        cout<<cu<<endl;
        if(count!=res.size()-1){
          if(cu%2!=0)
            cu++;
          if(ans> (cu/2))
            ans = cu/2;
        }
        else{
          if(ans>cu)
            ans=cu;
        }
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}
