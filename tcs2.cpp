#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int n, s;
  cin>>n>>s;
  int participants[n][s+1];
  int ans[n]={0};
  int dist[n] = {0};
  for(int i=0;i<n;i++){
    for(int j=0;j<=s;j++){
      cin>>participants[i][j];
    }
  }
  for(int i=2;i<n;i+=2){
    int ma = 0, ind = 0;
    for(int j=0;j<n;j++){
      dist[j]+=(participants[j][i-1]+participants[j][i-2])*participants[j][s];
      if(ma<dist[j]){
        ma = dist[j];
        ind = j;
      }
    }
    ans[ind]++;
  }
  int ma = 0, ind = 0;
  for(int i=0;i<n;i++){
    if(ma<ans[i]){
      ma = ans[i];
      ind = i;
    }
  }
  cout<<ind+1<<endl;
  return 0;
}
