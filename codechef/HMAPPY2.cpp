#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll n, a, b, k;
    cin>>n>>a>>b>>k;
    ll nos = (n/a) + (n/b) - 2*(n/((a*b)/__gcd(a,b)));
    if(nos>=k)
      cout<<"Win"<<endl;
    else
      cout<<"Lose"<<endl;
  }
  return 0;
}
