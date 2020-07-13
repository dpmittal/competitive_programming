#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll int d;
    string a;
    cin>>d>>a;
    ll int c = count(a.begin(), a.end(), 'P');
    ld proxy = ceil((0.75)*d) - c;
    ll int ans = proxy;
    if(proxy<=0){
      cout<<0<<endl;
      continue;
    }
    for(ll int i=2;i<d-2;i++){
      if(a[i]=='A'){
        if((a[i+1]=='P' || a[i+2]=='P') && (a[i-1]=='P' || a[i-2]=='P'))
          proxy--;
      }
      if(proxy==0)
        break;
    }
    if(proxy>0)
      cout<<-1<<endl;
    else
      cout<<ans<<endl;
  }
  return 0;
}
