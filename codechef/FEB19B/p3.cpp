#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n, k;
    cin>>n;
    vector<ll> att, def;
    for(ll i=0;i<n;i++){
      cin>>k;
      att.push_back(k);
    }
    for(ll i=0;i<n;i++){
      cin>>k;
      def.push_back(k);
    }
    ll max=-1;
    for(ll i=0;i<n;i++){
      if(i==0){
        if(def[i]>(att[n-1]+att[i+1]))
        {
          if(def[i]>max){
            max = def[i];
          }
        }
      }
      else if(i==(n-1)){
        if(def[i]>(att[i-1]+att[0]))
        {
          if(def[i]>max){
            max = def[i];
          }
        }
      }
      else {
        if(def[i]>(att[i-1]+att[i+1]))
        {
          if(def[i]>max){
            max = def[i];
          }
        }
      }
    }
    cout<<max<<endl;

  }
  return 0;
}
