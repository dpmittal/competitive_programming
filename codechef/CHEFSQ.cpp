#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n, k, l;
    vector<ll> a, b;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>k;
      a.push_back(k);
    }
    cin>>l;
    for(int i=0;i<l;i++){
      cin>>k;
      b.push_back(k);
    }
    int j=0;
    for(int i=0;i<n;i++){
      if(a[i]==b[j]){
        j++;
      }
      if(j==l)
        break;
    }
    if(j==l)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
  return 0;
}
