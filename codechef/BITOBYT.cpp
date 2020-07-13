#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    ll l;
    cin>>l;
    ll d = l/26;
    l = l%26;
    if(l<3 && l>0)
      cout<<pow(2, d)<<" 0 0\n";
    else if(l>2 && l<11)
      cout<<"0 "<<pow(2, d)<<" 0\n";
    else{
      if(l!=0)
        cout<<"0 0 "<<pow(2, d)<<"\n";
      else
        cout<<"0 0 "<<pow(2, d-1)<<"\n";
    }
  }
  return 0;
}
