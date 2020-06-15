#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    ll arr[65];
    ll k=4;
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<64;i++){
        arr[i] = k-1;
        k*=2;
    }
    while(itr--){
        ll n;
        cin>>n;
        ll ans = 0;
        int i = 1;
        while(n>0){
            if(n&1)
                ans+=arr[i];
            n>>=1;
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}