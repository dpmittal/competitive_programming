#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
  int itr;
  cin>>itr;
  while(itr--){
    int k, count = 0;
    for(int i=0;i<5;i++){
      cin>>k;
      if(k==1)
        count++;
    }
    if(count==0)
      cout<<"Beginner"<<endl;
    else if(count==1)
      cout<<"Junior Developer"<<endl;
    else if(count==2)
      cout<<"Middle Developer"<<endl;
    else if(count==3)
      cout<<"Senior Developer"<<endl;
    else if(count==4)
      cout<<"Hacker"<<endl;
    else
      cout<<"Jeff Dean"<<endl;    
  }
  return 0;
}
