#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  string input_file, output_file;
  cout<<"Input File:-\n";
  cin>>input_file;
  cout<<"Output File:-\n";
  cin>>output_file;
  ifstream inp;
  ofstream out;
  inp.open(input_file);
  out.open(output_file, ios::trunc);
  ll itr;
  inp>>itr;
  vector<set<string>> tags;
  vector<ll> order_h, order_v;
  long double count=0;
  for(ll i=0;i<itr;i++){
    char ch;
    int n;
    string s;
    set<string> k;
    inp>>ch>>n;
    if(ch=='H'){
      count++;
      // order_h.push_back(i);
    }
    else{
      count+=0.5;
      order_v.push_back(i);
    }
    for(ll j=0;j<n;j++){
      inp>>s;
      k.insert(s);
    }
    tags.push_back(k);
  }
  out<<count<<"\n";
  out<<0<<"\n";
  for(ll i=1;i<tags.size();i++){
    // out<<order_h[i]<<"\n";
    // set<string> ui;
    ll ma = tags[i-1].size();
    ll ind = i-1;
    for(ll j=0;j<tags.size();j++){
      set<string> ui;
      if(j!=(i-1)){
        set_union(tags[ind-1].begin(), tags[ind-1].end(), tags[j].begin(), tags[j].end(), ui.begin());
        if(ui.size()>ma){
          ind = j;
          ma = ui.size();
        }
      }
    }
    cout<<ma<<endl;
  }
  ll p = order_v.size();
  for(ll i=0;i<order_v.size()/2;i++){
    out<<order_v[i]<<" "<<order_v[p-i-1]<<"\n";
  }
  return 0;
}
