#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  for(int t=1;t<=itr;t++){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }
    ll k=0, r=0, c=0;
    for(int i=0;i<n;i++){
      set<int> a;
      for(int j=0;j<n;j++){
        if(i==j)
          k+=arr[i][j];
        a.insert(arr[i][j]);
      }
      if(a.size()!=n)
        r++;
      a.clear();
    }
    for(int i=0;i<n;i++){
      set<int> a;
      for(int j=0;j<n;j++){
        a.insert(arr[j][i]);
      }
      if(a.size()!=n)
        c++;
      a.clear();
    }
    cout<<"Case #"<<t<<": "<<k<<" "<<r<<" "<<c<<endl;
  }
  return 0;
}
