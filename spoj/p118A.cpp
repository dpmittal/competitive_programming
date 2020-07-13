#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans = 0;
    if(a<=b)
    {
      ans = (n)*a;
    }
    else{
      ans = (n/2)*b;
      n = n%2;
      ans+= n*a;
    }
    cout<<ans<<endl;
  }
  return 0;
}
