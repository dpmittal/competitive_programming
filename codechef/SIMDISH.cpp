#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    vector<string> a;
    int count = 0;
    string k;
    for(int i=0;i<4;i++){
      cin>>k;
      a.push_back(k);
    }
    for(int i=0;i<4;i++){
      cin>>k;
      if (find(a.begin(), a.end(), k)!=a.end())
        count++;
    }
    if(count>=2)
      cout<<"similar"<<endl;
    else
      cout<<"dissimilar"<<endl;
  }
  return 0;
}
