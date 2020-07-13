#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n;
    cin>>n;
    if(n%10==0)
      cout<<0<<endl;
    else if(n%5==0)
      cout<<1<<endl;
    else
      cout<<-1<<endl;
  }
  return 0;
}
