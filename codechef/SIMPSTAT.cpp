#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  cout<<fixed;
  while(itr--){
    ll n, k,l;
    cin>>n>>k;
    vector<ll> arr;
    for(ll i=0;i<n;i++){
      cin>>l;
      arr.push_back(l);
    }
    stable_sort(arr.begin(), arr.end());
    long double s=0;
    for(ll i=k; i<(n-k);i++)
      s+=arr[i];
    cout<<setprecision(6)<<s/(n-2*k)<<endl;
  }
  return 0;
}
