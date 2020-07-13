#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int n, x, y;
  cin>>n>>x>>y;
  string s;
  cin>>s;
  int count = 0;
  for(int i=n-1;i>=(n-x);i--){
    if((n-i-1)==y){
      if(s[i]=='0')
        count++;
    }
    else{
      if(s[i]=='1')
        count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
