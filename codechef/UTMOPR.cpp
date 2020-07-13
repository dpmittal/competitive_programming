#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n, k, m;
    cin>>n>>k;
    ll s = 0;
    for(ll i=0;i<n;i++){
      cin>>m;
      s+=m;
    }
    for(int i=1;i<k;i++){
      s+=(s+1);
    }
    if(s%2!=0)
      cout<<"even\n";
    else
      cout<<"odd\n";
  }
  return 0;
}
