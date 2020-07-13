#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n, k;
    ld s = 0;
    cin>>n;
    bool flag_f = false;
    bool flag_e = false;
    for(int i=0;i<n;i++){
      cin>>k;
      s+=k;
      if(k==2)
        flag_f = true;
      if(k==5)
        flag_e = true;
    }
    if(!flag_f && flag_e && (s/n)>=4)
      cout<<"Yes\n";
    else
      cout<<"No\n";
  }
  return 0;
}
