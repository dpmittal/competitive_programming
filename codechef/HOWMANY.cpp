#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  ll n;
  cin>>n;
  int count = 0;
  while(n>0){
    n/=10;
    count++;
    if(count==4)
      break;
  }
  if(count<=3)
    cout<<count<<endl;
  else
    cout<<"More than 3 digits"<<endl;
  return 0;
}
