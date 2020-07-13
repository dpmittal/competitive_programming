#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll k;
    cin>>k;
    ll ans = 1;
    ll a = 2;
    ll p = 1000000007;
    k-=1;
    while (k > 0)
    {
        if (k%2==1)
            ans = (ans*a) % p;
        k = k/2;
        a = (a*a) % p;
    }
    ans = (10*ans)%p;
    cout<<ans<<endl;
  }
  return 0;
}
