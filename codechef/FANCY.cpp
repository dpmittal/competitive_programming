#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    string s;
    cin>>s;
    bool flag = false;
    while(s){
      if(s=="not")
        flag=true;
      cin>>s;
    }
    if(flag)
      cout<<"Real Fancy"<<endl;
    else
      cout<<"regularly fancy"<<endl;
  }
  return 0;
}
