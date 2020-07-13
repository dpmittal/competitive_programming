#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n, k;
  cin>>n;
  ll count = 0, l=0;
  vector<ll> arr;
  for(ll i=0;i<n;i++){
    cin>>k;
    if(k==1)
    {
      count++;
      if(l!=0)
        arr.push_back(l);
      l=0;
    }
    l++;
  }
  if(l!=0){
    arr.push_back(l);
  }
  cout<<count<<endl;
  for(ll i=0;i<count;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
