#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    cin>>n;
    vector<ll> a;
    ll k;
    for(int i=0;i<n;i++){
      cin>>k;
      a.push_back(k);
    }
    stable_sort(a.begin(), a.end());
    ll ans = LONG_MAX;
    for(int i=1;i<n;i++){
      if(ans>(a[i]-a[i-1]))
        ans = a[i]-a[i-1];
    }
    cout<<ans<<endl;
  }
  return 0;
}
