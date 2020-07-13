#include<bits/stdc++.h>
#define ll long long
using namespace std;

int CountUniqueCharacters(string str){
    int count = 0;

    for (int i = 0; i < strlen(str); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}

int main(){
  ll n,k;
  cin>>n>>k;
  string s, l;
  cin>>s;
  ll x = 0;
  for(ll i=0;i<n;i++){
    l = s.substr(i, i+k);
    if(CountUniqueCharacters(l)==1){
      for(ll j=i+k;j<n-k;j++){
        string p = s.substr(j, j+k);
        if(isequals(s, p))
          x++;
      }
    }
  }
  cout<<x<<endl;
  return 0;
}
