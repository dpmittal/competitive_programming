#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll itr;
  cin>>itr;
  while(itr--){
    string s;
    cin>>s;
    bool flag=true;
    for(ll i=0;i<s.size();i+=2){
      if(s[i]==s[i+1]){
        flag=false;
        break;
      }
    }
    if(flag==true)
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }
  return 0;
}
