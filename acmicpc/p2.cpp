#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n;
    cin>>n;
    map<string, int> m;
    string s; int k;
    for(ll i=0;i<n;i++){
      cin>>s>>k;
      string d = s+to_string(k);
      if(m.find(d)==m.end())
        m.insert(make_pair(d, 1));
      else{
        m[d]++;
        // cout<<d<<endl;
      }
    }
    // for(auto i=m.begin();i!=m.end();i++){
    //   cout<<i->first<<" "<<i->second<<endl;
    // }
    ll ans = 0;
    auto j = m.begin();
    j++;
    for(auto i=m.begin();i!=m.end();i++){
      if(j==m.end()){
        ans+=i->second;
        continue;
      }
      if(i->first.substr(0, i->first.length()-2)!=j->first.substr(0, j->first.length()-2))
        ans+=i->second;
      else{
        // cout<<i->second<<" "<<j->second<<endl;
        ans+= max(i->second, j->second);
        i++;
        j++;
        if(j!=m.end())
          j++;
      }
      if(j!=m.end())
        j++;
    }
    cout<<ans<<endl;
  }
  return 0;
}
