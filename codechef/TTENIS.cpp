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
    int chef = 0, oppo = 0;
    int win = 11;
    bool flag = false;
    for(int i=0;i<s.length();i++){
      if(s[i]=='1')
      {
        chef++;
        if(chef==(win-1) && oppo==(win-1))
          win++;
        else if(chef==win){
          flag = true;
          break;
        }
      }
      else{
        oppo++;
        if(chef==(win-1) && oppo==(win-1))
          win++;
        else if(oppo==win)
          break;
      }
    }
    if(flag)
      cout<<"WIN\n";
    else
      cout<<"LOSE\n";
  }
  return 0;
}
