#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n, k;
  cin>>n;
  ll count = 0;
  vector<ll> arr;
  for(ll i=0;i<n;i++){
    cin>>k;
    arr.push_back(k);
  }
  for(ll i=0;i<n;i++){
    bool flag=false;
    for(ll j=0;j<n;j++){
      if(i==j)
        continue;
      ll ans = arr[i]+arr[j];
      ll k = log(ans)/log(2);
      if(pow(2,k)==ans){
        flag=true;
        break;
      }
    }
    if(flag==false)
      count++;
  }
  cout<<count<<endl;
  return 0;
}
