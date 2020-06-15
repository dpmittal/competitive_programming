#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  for(int t=1;t<=itr;t++){
    int n, k;
    cin>>n>>k;
    bool flag  = false;
    int d=1, c;
    int arr[n][n];
    while(!flag){
      c = d;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          arr[i][j] = c;
          c++;
          if(c>n)
            c=1;
          cout<<c<<" "<<i<<" "<<" "<<j<<" "<<arr[i][j]<<endl;
        }
        c= d+1;
        if(c>n)
          c=1;
      }
      int su = 0;
      for(int i=0;i<n;i++){
        su+=arr[i][i];
      }
      if(su==k){
        flag = true;
        break;
      }
      d++;
      if(d>n)
        break;
    }
    if(flag){
      cout<<"Case #"<<t<<": POSSIBLE"<<endl;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
    }
    else{
      cout<<"Case #"<<t<<": IMPOSSIBLE"<<endl;
    }
  }
  return 0;
}
