#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n, k;
  cin>>n>>k;
  ll c = 0;
  while(n--){
    ll t;
    cin>>t;
    if(t%k==0)
      c++;
  }
  cout<<c<<endl;
  return 0;
}
