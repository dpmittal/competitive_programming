#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll a,b;
  char c;
  cin>>a>>b>>c;
  if(c=='+')
    cout<<a+b<<endl;
  else if(c=='-')
    cout<<a-b<<endl;
  else if(c=='*')
    cout<<a*b<<endl;
  else{
    double c=a;
    c/=b;
    cout<<fixed<<setprecision(6)<<c<<endl;
  }
  return 0;
}
