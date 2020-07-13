#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n, k, i=1;
    cin>>n>>k;
    string ans = "";
    while(true){
      if(i%2!=0){
        if(n<i)
        {
          ans = "Bob";
          break;
        }
        n-=i;
      }
      else{
        if(k<i){
          ans = "Limak";
          break;
        }
        k-=i;
      }
      i++;
    }
    cout<<ans<<endl;
  }
  return 0;
}
