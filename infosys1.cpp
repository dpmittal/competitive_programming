#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int n, m;
  cin>>n>>m;
  int k, j=1, ans = 1;
  ll ma = LONG_MIN;
  map<int, int> count;
  for(int i=1;i<=n;i++){
    count.insert(make_pair(i, 0));
  }
  for(int i=0;i<m;i++){
    cin>>k;
    if(j==k){
      for(int i=1;i<=n;i++){
        if(i==j)
          count[i]+=2;
        else
          count[i]++;
        if(count[i]>ma){
          ma = count[i];
          ans = i;
        }
      }
    }
    else{
      cout<<j<<" "<<k<<endl;
      while(j!=(k+1)){
        count[j]++;
        cout<<j<<" "<<count[j]<<endl;
        if(count[j]>ma){
          ma = count[j];
          ans = j;
        }
        if(j==k)
          break;
        j++;
        if(j>n)
          j=1;
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout<<count[i]<<endl;
  }
  cout<<ans<<endl;
  return 0;
}
