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
          if ((su/i)<=26){
            div.push_back(i);
            c++;
          }
        }
      }
      ll ans = LONG_MAX;
      for(ll i=0;i<c;i++){
        ll cu = 0, k, neg=0, pos=0, pos_c=0;
        for(ll j=0;j<res.size();j++){
          k= div[i]-res[j];
          if(k>0 && pos_c<(su/div[i])){
            pos+=k;
            pos_c++;
          }
          else
            neg+= abs(k);
        }
        // cout<<pos<<" "<<neg<<endl;
        if(pos==neg)
          cu=pos;
        else
          cu = max(pos, neg)-min(pos, neg);
        if(ans>cu)
          ans=cu;
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}
