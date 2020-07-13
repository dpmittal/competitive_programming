#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;cin >> t;
while(t--){
int n;
cin >> n;
map<std::string,int> m1,m2;
string s;int in;
int cnt = 0;
set<std::string> s1;
for(int i=0;i < n;i++){
cin >> s >> in;
s1.insert(s);
if(in == 0)
m1[s]++;// 0
else
m2[s]++; // 1
}
for(auto i=s1.begin();i != s1.end();i++){
 //  int val1,val2;
 //  if(m1.find(*i) != m1.end()){
 //      auto temp = m1.find(*i);
 //      val1 = temp->second;
 //  }else
 //      val1 = 0;
 //  if(m2.find(*i) != m2.end()){
 //      auto temp = m2.find(*i);
 //      val2 = temp->second;
 //  }else
 //      val2 = 0;
cnt += max(m1[*i],m2[*i]);
}
cout << cnt << '\n';
}
return 0;
}
