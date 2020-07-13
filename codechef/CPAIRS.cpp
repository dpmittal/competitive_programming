#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    vector<ll> even , odd;
    cin>>n;
    ll k;
    for(int i=0;i<n;i++){
      cin>>k;
      if(k%2==0)
        even.push_back(i);
      else
        odd.push_back(i);
    }
    ll count = 0;
    for(int i=0;i<even.size();i++){
      for(int j=odd.size()-1;j>=0;j--){
        if(even[i]<odd[j])
          count++;
        else
          break;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
