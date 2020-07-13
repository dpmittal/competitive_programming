#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n, k;
    cin>>n;
    k = n;
    ll s= 0;
    while(n>0){
      s+=n%10;
      n/=10;
    }
    if(s%10==0)
      s = 0;
    else
      s = 10*((s/10)+1) - s;
    string ans = to_string(k) + to_string(s);
    cout<<ans<<endl;
  }
  return 0;
}
