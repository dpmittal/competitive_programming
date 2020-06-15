#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll a, b;
        cin>>a>>b;
        if(a==0 || b==0)
            cout<<0<<endl;
        else{
            ll ans = 0;
            while(a!=b && a>0 && b>0){
                if(a>b){
                    a-=2;
                    b-=1;
                }
                else{
                    b-=2;
                    a-=1;
                }
                if(a<0 || b<0)
                    break;
                ans++;
            }
            if(a>0 && a==b)
                ans+=(2*(a+b))/3;
            cout<<ans<<endl;
        }
    }
    return 0;
}