#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    cin>>n;
    ll int arr[n];
    ll int s = 0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      s+=arr[i];
    }
    ll mean = s/n;
    if(find(arr, arr+n, mean)!=(arr+n) && s%n==0)
      cout<<find(arr, arr+n, mean)<<endl;
    else
      cout<<"Impossible\n";
  }
  return 0;
}
