#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n;
    cin>>n;
    string k = to_string(n);
    string s = "";
    int ans = 1000000000;
    int l = k.length();
    s = "";
    for(int i=0;i<l;i++){
      string temp  = s+k.substr(i+1, l);
      if(stoi(temp)<ans)
        ans = stoi(temp);
      s+=k[i];
    }
    cout<<ans<<endl;
  }
  return 0;
}
