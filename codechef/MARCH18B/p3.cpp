#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n;
    string s;
    cin>>n;
    vector<string> arr;
    for(ll i=0;i<n;i++){
      cin>>s;
      arr.push_back(s);
    }
    string sup = "aeiou";
    ll count = 0;
    for(ll i=0;i<n;i++){
      string v;
      set_difference(sup.begin(), sup.end(), arr[i].begin(), arr.end(), v.begin());
      if(v.length())
        count+=(n-i-1);
      else {
        for(ll j=i+1;j<n;j++){
          v = "";
          string p = s[i]+s[j];
          set_difference(sup.begin(), sup.end(), arr[i].begin(), arr.end(), v.begin());
          if(v.length())
            count++;
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
