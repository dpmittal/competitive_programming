#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    cin>>n;
    ll k;
    vector<ll> chef_e, chef_o, chefette_e, chefette_o;
    for(int i=0;i<n;i++){
      cin>>k;
      if(k%2==0)
        chef_e.push_back(k);
      else
        chef_o.push_back(k);
    }
    for(int i=0;i<n;i++){
      cin>>k;
      if(k%2==0)
        chefette_e.push_back(k);
      else
        chefette_o.push_back(k);
    }
    stable_sort(chef_e.begin(), chef_e.end());
    stable_sort(chef_o.begin(), chef_o.end());
    stable_sort(chefette_e.begin(), chefette_e.end());
    stable_sort(chefette_o.begin(), chefette_o.end());
    ll s = 0;
    int i_i, j_j;
    for(int i=0; i<n && i<chef_e.size() && i<chefette_e.size(); i++){
      s+=(chef_e[i]+chefette_e[i])/2;
      i_i = i;
    }
    i_i++;
    for(int j=0; j<n && j<chef_o.size() && j<chefette_o.size(); j++){
      s+=(chefette_o[j]+chef_o[j])/2;
      j_j = j;
    }
    j_j++;
    if(i_i<chef_e.size()){
        int l = j_j;
        for(int k=i_i; k<chef_e.size();k++){
          s+= (chef_e[k]+chefette_o[l])/2;
          l++;
      }
    }
    if(i_i<chefette_e.size()){
      int l = j_j;
      for(int k=i_i;k<chefette_e.size();k++){
        s+= (chef_o[l]+chefette_e[k])/2;
        // cout<<chef_o[k]<<" "<<chefette_e[l]<<endl;
        l++;
      }
    }
    cout<<s<<endl;
  }
  return 0;
}
