#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n, k;
    cin>>n>>k;
    ll ans = 0;
    while(n>0){
      ans+=(n%k);
      n/=k;
      if(n!=0)
        ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}
