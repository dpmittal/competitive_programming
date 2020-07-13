#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  long long int itr;
  cin>>itr;
  while(itr--){
    long long int n, k;
    int a,b;
    cin>>n>>a>>b;
    ll n_a=0, n_b=0;
    for(ll i=0;i<n;i++){
      cin>>k;
      if(k%a==0 && k%b!=0)
        n_a++;
      else if(k%b==0 && k%a!=0)
        n_b++;
    }
    if(n_a>=n_b)
      cout<<"BOB\n";
    else
      cout<<"ALICE\n";
  }
  return 0;
}
