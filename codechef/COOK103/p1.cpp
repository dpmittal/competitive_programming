#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n, b, ma=LONG_MIN, flag=0;
    cin>>n>>b;
    while(n--){
      ll l, h, p;
      cin>>l>>h>>p;
      if(p<=b){
        flag = 1;
        if((l*h)>ma){
          ma = l*h;
        }
      }
    }
    if(flag==1){
      cout<<ma<<endl;
    }
    else{
      cout<<"no tablet"<<endl;
    }
  }
  return 0;
}
