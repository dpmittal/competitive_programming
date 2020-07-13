#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n, ans=1;
    cin>>n;
    vector<pair<ld, ld>> v;
    map<ll, vector<ll>> m;
    ll l, r, vel;

    // Input
    for(ll i=0;i<n;i++){
      cin>>l>>r>>vel;

      // Input Refine
      for(auto j=m.begin();j!=m.end();j++){
        cout<<j->first;
        if(vel%j->first==0){
          ll fact = vel/j->first;
          vel = j->first;
          l/=fact;
          r/=fact;
          break;
        }
      }


      v.push_back(make_pair(l, r));
      if(m.find(vel)!=m.end())
        m[vel].push_back(i);
      else{
        vector<ll> j;
        j.push_back(i);
        m.insert(make_pair(vel, j));
      }
    }

    // Processing
    for(auto i=m.begin();i!=m.end();i++){
      int cnt = 0;
      cout<<i->first<<endl;
      for(int j=0; j<i->second.size(); j++){
        for(int z=j+1; z<i->second.size();z++){
          if(v[i->second[j]].first<=v[i->second[z]].first && v[i->second[j]].second>=v[i->second[z]].second)
            cnt++;
          else if(v[i->second[j]].first>=v[i->second[z]].first && v[i->second[j]].second<=v[i->second[z]].second)
            cnt++;

          if(cnt>=2)
            break;
        }
        if(cnt>2)
          break;
      }
      if(cnt>=2){
        ans = 0;
        break;
      }
    }

    //Answer
    if(ans)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
    // cout<<ans<<endl;
  }
  return 0;
}
