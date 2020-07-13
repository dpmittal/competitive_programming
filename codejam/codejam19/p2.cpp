#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
      int n;
      ll size = 2*n - 2;
      string s;
      cin>>n>>s;
      bool s_f = false, e_f = false;
      for(ll i=0;i<size;i++){
        if(s[i]=='S' && (s_f==false || e_f==true)){
          s[i] = 'E';
          if(s_f==false && e_f==false){
            s_f = true;
          }
          else if(e_f==true){
            e_f = false;
          }
        }
        else if(s[i]=='E' && (e_f==false || s_f==true)){
          s[i] = 'S';
          if(e_f==false && s_f==false){
            e_f = true;
          }
          else if(s_f==true){
            s_f = false;
          }
        }
      }
      cout<<s<<endl;
    }
    return 0;
}
