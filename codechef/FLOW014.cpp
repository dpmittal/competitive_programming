#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    // cout<<itr<<endl;
    ld h, c, t;
    cin>>h>>c>>t;
    int ans = 0;
    bool f_h = false;
    bool f_c = false;
    bool f_t = false;
    if(h>50)
     f_h = true;
    if(c<0.7)
      f_c = true;
    if(t>5600)
      f_t = true;
    // cout<<f_h<<" "<<f_c<<" "<<f_t<<endl;
    // cout<<h<<" "<<c<<" "<<t<<endl;
    if(f_h && f_c && f_t)
      ans = 10;
    else if(f_h && f_c)
      ans = 9;
    else if(f_c && f_t)
      ans = 8;
    else if(f_h && f_t)
      ans = 7;
    else if(f_h || f_c || f_t)
      ans = 6;
    else
      ans = 5;
    cout<<ans<<endl;
  }
  return 0;
}
