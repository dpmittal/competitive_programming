#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n, k;
  cin>>n;
  vector<ll> arr;
  for(ll i=0; i<n; i++){
    cin>>k;
    arr.push_back(k);
  }
  stable_sort(arr.begin(), arr.end());
  cout<<arr[n-2]%arr[n-1]<<endl;
  return 0;
}
