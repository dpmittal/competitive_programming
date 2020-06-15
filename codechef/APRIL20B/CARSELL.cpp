#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    ll k;
    vector<ll> v;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>k;
      v.push_back(k);
    }
    stable_sort(v.begin(), v.end(), ::greater<ll>());
    k = 0;
    for(int i=0;i<n;i++){
      if(v[i]-i>=0)
        k+=v[i]-i;
    }
    cout<<k%1000000007<<endl;
  }
  return 0;
}
