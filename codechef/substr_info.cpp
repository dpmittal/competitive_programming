#include<bits/stdc++.h>
#define ll long long
using namespace std;
long substringCalculator(string s){
  int n = s.length();
  return (n*(n+1)/2);
}
int main(){
  string s;
  cin>>s;
  cout<<substringCalculator(s)<<endl;
  return 0;
}
