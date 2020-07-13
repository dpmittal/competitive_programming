#include<bits/stdc++.h>
using namespace std;
int mul(int a, int b){
  if(b==0)
    return 0;
  if(b%2==0)
    return 2*mul(a, b/2);
  else
    return 2*mul(a, b/2)+a;
}
int main(){
  int a, b;
  cin>>a>>b;
  cout<<mul(a, b)<<endl;
  return 0;
}
