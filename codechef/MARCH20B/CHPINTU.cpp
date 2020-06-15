#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int m, n;
    cin>>m>>n;
    map<int, int> arr;
    int f[m], p[m];
    for(int i=0;i<m;i++){
      cin>>f[i];
      arr.insert(make_pair(f[i], 0));
    }
    for(int i=0;i<m;i++){
      cin>>p[i];
      arr[f[i]]+=p[i];
    }
    int min=30000;
    for(auto i=arr.begin();i!=arr.end();i++){
      if(i->second<min){
        min = i->second;
      }
    }
    cout<<min<<endl;
  }
  return 0;
}
