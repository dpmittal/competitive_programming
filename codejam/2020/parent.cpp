#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  for(int t=1;t<=itr;t++){
    int n;
    cin>>n;
    string ans = "";
    vector<pair<int, int>> v, jam, c;
    for(int i=0;i<n;i++){
      int start, end;
      cin>>start>>end;
      v.push_back(make_pair(start, end));
    }
    ans+='C';
    c.push_back(v[0]);
    bool flag = true;
    for(int i=1;i<n;i++){
      bool flagj = true, flagc=true;
      for(int j=0;j<jam.size();j++){
        if((v[i].first>=jam[j].first && v[i].first<jam[j].second) || (v[i].second>jam[j].first && v[i].second<=jam[j].second) || (jam[j].first>=v[i].first && jam[j].first<v[i].second) || (jam[j].second>v[i].first && jam[j].second<=v[i].second)){
          flagj = false;
          break;
        }
      }
      if(flagj){
        ans+='J';
        jam.push_back(v[i]);
      }
      else{
        for(int j=0;j<c.size();j++){
          if((v[i].first>=c[j].first && v[i].first<c[j].second) || (v[i].second>c[j].first && v[i].second<=c[j].second) || (c[j].first>=v[i].first && c[j].first<v[i].second) || (c[j].second>v[i].first && c[j].second<=v[i].second)){
            flagc = false;
            break;
          }
        }
        if(flagc){
          ans+='C';
          c.push_back(v[i]);
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
