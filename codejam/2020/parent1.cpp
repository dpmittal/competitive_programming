#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  for(int t=1;t<=itr;t++){
    int n, tr;
    cin>>n;
    string ans = "";
    vector<pair<int, pair<int, int>>> v, jam, c;
    for(int i=0;i<n;i++){
      int start, end;
      cin>>start>>end;
      ans+='*';
      v.push_back(make_pair(start, make_pair(end, i)));
    }
    stable_sort(v.begin(), v.end());
    ans[v[0].second.second]='C';
    c.push_back(v[0]);
    bool flag = true;
    for(int i=1;i<n;i++){
      bool flagj = true, flagc=true;
      if(jam.size()==0){
        jam.push_back(v[i]);
        ans[v[i].second.second] = 'J';
      }
      else{
        if(jam[jam.size()-1].second.first<=v[i].first){
          jam.push_back(v[i]);
          ans[v[i].second.second] = 'J';
        }
        else{
          flagj=false;
          if(c.size()==0){
            c.push_back(v[i]);
            ans[v[i].second.second] = 'C';
          }
          else{
            if(c[c.size()-1].second.first<=v[i].first){
              c.push_back(v[i]);
              ans[v[i].second.second] = 'C';
            }
            else
              flagc = false;
          }
        }
      }
      if(!flagj && !flagc){
        flag = false;
        break;
      }
    }
    if(flag)
      cout<<"Case #"<<t<<": "<<ans<<endl;
    else
      cout<<"Case #"<<t<<": IMPOSSIBLE"<<endl;
  }
  return 0;
}
