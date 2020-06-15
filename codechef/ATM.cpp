#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int t;
  double b;
  cin>>t>>b;
  // cout << std::setprecision(2);
  if(t%5!=0)
    cout<<b<<endl;
  else if((t+0.5)>b)
    cout<<b<<endl;
  else
    printf("%.2lf\n", b-(0.5+t));
  return 0;
}
