#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int l,b;
  cin>>l>>b;
  if ((l*b)>(2*(l+b))){
    cout<<"Area\n";
    cout<<l*b<<endl;
  }
  else if ((l*b)<(2*(l+b))){
    cout<<"Peri\n";
    cout<<2*(l+b)<<endl;
  }
  else{
    cout<<"Eq\n";
    cout<<2*(l+b)<<endl;
  }
  return 0;
}
