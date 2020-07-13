#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n, k;
    set<ll> a;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>k;
      a.insert(k);
    }
    cout<<a.size()<<endl;
  }
  return 0;
}
