#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  string s,t;
  cin>>s>>t;
  ll l_s = s.length()-1;
  ll l_t = t.length()-1;
  ll ans=0;
  while(true){
    if(l_t>=0 && l_s>=0){
      if(s[l_s]!=t[l_t]){
        ans+=l_s+l_t+2;
        break;
      }
      else{
        l_s--;
        l_t--;
      }
    }
    else if(l_s>=0){
      ans+=l_s+1;
      break;
    }
    else{
      ans+=l_t+1;
      break;
    }
    // cout<<l_s<<" "<<l_t<<endl;
  }
  cout<<ans<<endl;
  return 0;
}
