#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n, k , pos=0, neg=0;
    cin>>n;
    for(ll i=0;i<n;i++){
      cin>>k;
      if(k>0)
        pos++;
      else
        neg++;
    }
    if(pos>0 && neg>0)
      cout<<max(pos, neg)<<" "<<min(pos, neg)<<endl;
    else if(pos>0)
      cout<<pos<<" "<<pos<<endl;
    else
      cout<<neg<<" "<<neg<<endl;
  }
  return 0;
}
