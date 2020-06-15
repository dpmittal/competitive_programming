#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int s;
    int w[3];
    cin>>s>>w[0]>>w[1]>>w[2];
    sort(w, w+3);
    int count = 1, k=s;
    for(int i=0;i<3;i++){
      k-=w[i];
      if(k==0){
        count++;
        k=s;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
