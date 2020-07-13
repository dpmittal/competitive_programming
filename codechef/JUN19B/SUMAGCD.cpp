#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    ll k;
    set<ll> a;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>k;
      a.insert(k);
    }
    if(n==2){
      cout<<a[0]+a[1]<<endl;
      continue;
    }
    set<ll>:: iterator it;
    ll s = *(a.begin());
    for(it=a.begin()+1;it<a.end()-2;i++){
      s = gcd(s, *it);
    }
    ll ans1 = gcd(s, *(a.end()-1)) + *(a.end()-2) ;
    ll ans2 = gcd(s, *(a.end()-1)) + *(a.end()-1);
    cout<<max(ans1, ans2)<<endl;
  }
  return 0;
}
