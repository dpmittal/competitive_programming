#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll x,y,k;
    cin>>x>>y>>k;
    ll n = (x+y)/k;
    if(n%2==0)
      cout<<"Chef\n";
    else
      cout<<"Paja\n";
  }
  return 0;
}
