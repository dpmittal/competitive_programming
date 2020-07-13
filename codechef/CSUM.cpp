#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    ll k;
    cin>>n>>k;
    vector<ll> a;
    for(int i=0;i<n;i++){
      ll j;
      cin>>j;
      a.push_back(j);
    }
    stable_sort(a.begin(), a.end());
    vector<ll>::iterator element;
    bool flag = false;
    for(int i=0;i<n;i++){
      if(a[i]>=k){
        break;
      }
      else{
        element  = find(a.begin()+i+1, a.end(), (k-a[i]));
        if(element!=a.end()){
          flag = true;
          // cout<<*element<<" "<<a[i]<<endl;
          break;
        }
      }
    }
    if(flag)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
  return 0;
}
