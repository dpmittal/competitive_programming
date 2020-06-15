#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    if(c<=d && a>b)
      cout<<-1<<endl;
    else{
      ll rem = a-b;
      if(rem<=0)
        cout<<b<<endl;
      else{
        ll count = ceil((long double)rem/(c-d));
        ll ans = b+count*c;
        cout<<ans<<endl;
      }
    }
  }
  return 0;
}
