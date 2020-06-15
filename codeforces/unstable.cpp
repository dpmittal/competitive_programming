#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll a,b;
    cin>>a>>b;
    if(a==1)
      cout<<0<<endl;
    else if(a==2)
      cout<<b<<endl;
    else
      cout<<2*b<<endl;
  }
  return 0;
}
