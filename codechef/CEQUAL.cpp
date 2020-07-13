#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    set<ll> a;
    cin>>n;
    ll k;
    for(int i=0;i<n;i++){
      cin>>k;
      a.insert(k);
    }
    if(n==a.size())
      cout<<"No\n";
    else
      cout<<"Yes\n";
  }
  return 0;
}
