#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int k;
  cin>>k;
  int s=0, d = 0;
  while(k>0){
    s++;
    k-=(s/10)+1;
    d = s%10;
  }
  cout<<d<<endl;
  return 0;
}
