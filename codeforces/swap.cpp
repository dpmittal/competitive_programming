#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n, k;
    cin>>n>>k;
    int a[n], b[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<n;i++)
      cin>>b[i];
    sort(a, a+n);
    sort(b, b+n, ::greater<int>());
    int j = 0;
    for(int i=0;i<n;i++){
      if(k==0)
        break;
      if(a[i]<b[j]){
        swap(a[i], b[j]);
        j++;
        k--;
      }
    }
    int ans = 0;
    for(int i=0;i<n;i++)
      ans+=a[i];
    cout<<ans<<endl;
  }
  return 0;
}
