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
    string s, k;
    int count_c = 0, count_f = 0;
    cin>>s;
    for(int i=1;i<n;i++){
      cin>>k;
      if(s=="cookie"){
        count_c++;
        if(k=="milk")
          count_f++;
      }
      s = k;
    }
    if(count_c==count_f && n!=1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
