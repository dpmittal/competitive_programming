#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int n;
  string s;
  cin>>n>>s;
  int c_a = 0, c_b=0;
  int ans = 0;
  for(int i=0;i<n;i++){
    if(s[i]=='a')
      c_a++;
    else
      c_b++;
    // cout<<c_a<<" "<<c_b<<endl;
    if(i%2!=0){
      if(c_a!=c_b){
        ans+=(abs(c_a-c_b))/2;
      }
      c_a=0;
      c_b=0;
      // cout<<c_a<<endl;
    }
  }
  string k = "";
  for(int i=0;i<n;i++){
    if(i%2==0)
      k+='a';
    else
      k+='b';
  }
  cout<<ans<<endl<<k<<endl;
  return 0;
}
