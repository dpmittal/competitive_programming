#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n;
        cin>>n;
        ll k, l, ans = 0;
        cin>>k;
        for(ll i=1;i<n;i++){
            cin>>l;
            ans+=abs(l-k)-1;
            k = l;
        }
        cout<<ans<<endl;
    }
    return 0;
}