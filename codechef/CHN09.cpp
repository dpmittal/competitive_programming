#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    string s;
    ll l_a = 0, l_b = 0;
    cin>>s;
    for(int i=0;i<s.length();i++){
      if(s[i]=='a')
          l_a++;
      else
        l_b++;
    }
    cout<<min(l_a, l_b)<<endl;
  }
  return 0;
}
