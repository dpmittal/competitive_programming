#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    cin>>n;
    int count = 0;
    while(n>0){
      int k = sqrt(n);
      n-=(k*k);
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
