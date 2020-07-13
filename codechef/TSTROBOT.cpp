#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    ll x;
    string s;
    cin>>n>>x>>s;
    set<ll> a;
    a.insert(x);
    for(int i=0;i<n;i++){
      if(s[i]=='R')
        x++;
      else
        x--;
      a.insert(x);
    }
    cout<<a.size()<<"\n";
  }
  return 0;
}
