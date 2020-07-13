#include<bits/stdc++.h>
using namespace std;
int convert(char s[], int len){
  if(len==1)
    return (int)s[0] - (int)'0';
  int l = len-1;
  int pro = 1;
  while(l--){
    pro*=10;
  }
  int ans = convert(s+1, len-1);
  return ((int)s[0] - (int)'0')*pro + ans;
}
int main(){
  char s[100];
  cin>>s;
  int i = 0;
  while(s[i]!='\0'){
    i++;
  }
  cout<<convert(s, i)<<endl;
  return 0;
}
