#include<bits/stdc++.h>
using namespace std;
int main(){
  long long itr;
  cin>>itr;
  while(itr--){
    long long n,a,b,k;
    cin>>n>>a>>b>>k;
    long long c = n/a + n/b - 2*(n/((a*b)/__gcd(a, b)));
    if(c>=k && a!=b)
      cout<<"Win\n";
    else
      cout<<"Lose\n";
  }
  return 0;
}
