#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n, k;
  cin>>n;
  vector<ll> s, a;
  ll ans[3];
  for(int i=0;i<n;i++){
    cin>>k;
    s.push_back(k);
  }
  for(int j=1;j<=3;j++){
    vector<ll>::iterator it;
    for(int i=0;i<n-j;i++){
      cin>>k;
      it= find(s.begin(), s.end(), k);
      s.erase(it);
      a.push_back(k);
    }
    ans[j-1] = s[0];
    s = a;
    a.clear();
  }
  for(int i=0;i<3;i++){
    cout<<ans[i]<<endl;
  }
  return 0;
}
