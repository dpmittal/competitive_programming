#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  for(int t=1;t<=itr;t++){
    string s;
    cin>>s;
    string ans="";
    int ind = 0;
    int n = s.size();
    for(int i=0;i<n;i++){
      int depth = (int)s[i] - 48;
      if(depth>ind){
        for(int j =0;j<(depth-ind);j++)
          ans+='(';
      }
      else{
        for(int j =0;j<(ind-depth);j++)
          ans+=')';
      }
      ans+=s[i];
      ind = depth;
    }
    for(int j =0;j<ind;j++)
      ans+=')';
    cout<<"Case #"<<t<<": "<<ans<<endl;
  }
  return 0;
}
