#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll a, b;
    cin>>a>>b;
    string s = "";
    while(a>0 || b>0){
      s+= to_string(((a%10)+(b%10))%10);
      a/=10;
      b/=10;
    }
    reverse(s.begin(), s.end());
    cout<<stoll(s)<<endl;
  }
  return 0;
}
