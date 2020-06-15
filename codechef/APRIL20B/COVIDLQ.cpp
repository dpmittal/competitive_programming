#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    bool flag = true;
    int ind=0, f=0;
    for(int i=0;i<n;i++){
      if(arr[i]==1 && f){
        if(i-ind<6){
          // cout<<ind<<" "<<i<<endl;
          flag = false;
          break;
        }
        ind = i;
      }
      else if(arr[i]==1){
        f = 1;
        ind = i;
      }
    }
    if(flag)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
