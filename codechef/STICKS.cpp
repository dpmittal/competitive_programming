#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    ll k ;
    vector<ll> a;
    cin>>n;
    for(int i=0; i<n; i++){
      cin>>k;
      a.push_back(k);
    }
    stable_sort(a.begin(), a.end());
    vector<ll> ans;
    for(int i=(n-2);i>=0;i--){
      if(a[i+1]==a[i]){
        ans.push_back(a[i]);
        i--;
      }
      if(ans.size()==2)
        break;
    }
    if(ans.size()>=2)
      cout<<ans[0]*ans[1]<<endl;
    else
      cout<<-1<<endl;
  }
  return 0;
}
