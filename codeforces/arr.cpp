#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n;
    cin>>n;
    ll ans =  0;
    for(ll i=3;i<=n;i+=2)
      ans+=((i*4)-4)*((i-1)/2);
    cout<<ans<<endl;
  }
  return 0;
}
