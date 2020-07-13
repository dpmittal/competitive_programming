#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool isVowel(char c){
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return true;
  else
    return false;
}

int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    for(int i=1;i<n;i++){
      if(isVowel(s[i]) && !(isVowel(s[i-1])))
        count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
