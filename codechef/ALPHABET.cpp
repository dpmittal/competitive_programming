#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  string s;
  cin>>s;
  ll itr;
  cin>>itr;
  while(itr--){
    string l;
    cin>>l;
    bool flag=true;
    for(ll i=0;i<l.size();i++){
      if(find(s.begin(), s.end(), l[i])==s.end()){
        flag=false;
        break;
      }
    }
    if(flag==false)
      cout<<"No"<<endl;
    else
      cout<<"Yes"<<endl;
  }
  return 0;
}
