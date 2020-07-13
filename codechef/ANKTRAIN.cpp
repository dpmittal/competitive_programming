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
    for(int i=1;i<9;i++){
      int k = (n-i)/8;
      if((n-i)%8 ==0){
        if(i==1){
          cout<<4+(8*k)<<"LB"<<endl;
          break;
        }
        else if(i==2){
          cout<<5+(8*k)<<"MB"<<endl;
          break;
        }
        else if(i==3){
          cout<<6+(8*k)<<"UB"<<endl;
          break;
        }
        else if(i==4){
          cout<<1+(8*k)<<"LB"<<endl;
          break;
        }
        else if(i==5){
          cout<<2+(8*k)<<"MB"<<endl;
          break;
        }
        else if(i==6){
          cout<<3+(8*k)<<"UB"<<endl;
          break;
        }
        else if(i==7){
          cout<<8+(8*k)<<"SU"<<endl;
          break;
        }
        else{
          cout<<7+(8*k)<<"SL"<<endl;
          break;
        }
      }
    }
  }
  return 0;
}
