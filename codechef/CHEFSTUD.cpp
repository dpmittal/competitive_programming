#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    string k;
    cin>>k;
    int count = 0;
    for(int i=1;i<k.length()-1;i++){
      if(k[i]=='<' && k[i+1]=='>')
        count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
