#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll a, b;
        cin>>a>>b;
        bool flag = false;
        int count = 0;
        if(a>b){
            while(a>=b){
                if(a%8==0 && (a/8)>=b)
                    a/=8;
                else if(a%4==0 && (a/4)>=b)
                    a/=4;
                else if(a%2==0 && (a/2)>=b)
                    a/=2;
                else if(a==b){
                    flag = true;
                    break;
                }
                else
                    break;
                count++;   
            }
        }
        else{
            while(a<=b){
                if((a*8)<=b)
                    a*=8;
                else if(a*4<=b)
                    a*=4;
                else if((a*2)<=b)
                    a*=2;
                else if(a==b){
                    flag = true;
                    break;
                }
                else
                    break;
                count++;   
            }
        }
        if(flag)
            cout<<count<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}