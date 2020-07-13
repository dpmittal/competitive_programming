#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n,m, k;
    cin>>n>>k>>m;
    ll num=1, den=1;
    while(m--){
      if(m==1){
        num*=(n-1);
        den*=n;
      }
      else{
        if(n>k){
          n=n%k;
        }
        else{
          num*=(n-1);
          den*=n;
          n+=k;
        }
      }
      cout<<num<<" "<<den<<endl;
    }
    cout<<num<<" "<<den<<endl;
  }
  return 0;
}
