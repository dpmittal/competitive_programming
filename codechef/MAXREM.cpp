#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int n;
  vector<ll> a;
  cin>>n;
  for(int i=0;i<n;i++){
    ll k;
    cin>>k;
    a.push_back(k);
  }
  stable_sort(a.begin(), a.end());
  ll ans = 0;
  for(int i=n-2;i>=0;i--){
    if(a[i]!=a[i+1])
    {
      ans = a[i];
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
