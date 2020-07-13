#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    ll n,k, m;
    cin>>n>>k;
    map<string , bool> forg;
    vector<string> str;
    string l;
    for(int i=0;i<n;i++){
      cin>>l;
      if(forg.find(l)==forg.end())
        forg.insert(make_pair(l, false));
      str.push_back(l);
    }
    for(ll j=0;j<k;j++){
      cin>>m;
      for(ll i=0;i<m;i++){
        cin>>l;
        if(forg.find(l)!=forg.end())
          forg[l]=true;
      }
    }
    map<string, bool>::iterator it;
    for(ll i=0;i<n;i++){
      if(forg[str[i]]==true)
        cout<<"YES ";
      else
        cout<<"NO ";
    }
    cout<<endl;
  }
  return 0;
}
