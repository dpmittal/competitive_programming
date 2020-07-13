#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n, k;
    vector<ll> ppl;
    cin>>n;
    for(ll i=0;i<n;i++){
      cin>>k;
      ppl.push_back(k);
    }
    stable_sort(ppl.begin(), ppl.end());
    ll count=0, temp=1;
    bool flag=false;
    for(int i=1;i<n;i++){
      if(ppl[i]==ppl[i-1]){
        temp++;
        if(i==(n-1))
          flag=true;
      }
      if(ppl[i]!=ppl[i-1] || flag==true){
        if(ppl[i-1]<=count)
          count+=temp;
        temp=1;
      }
    }
    if(ppl[n-1]<=count && flag==false){
      count+=temp;
    }
    cout<<count<<endl;
  }
  return 0;
}
