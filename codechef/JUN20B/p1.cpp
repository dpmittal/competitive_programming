#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        int n;
        ll k, t;
        cin>>n>>k;
        ll ans = 0;
        for(int i=0;i<n;i++){
            cin>>t;
            if(t>=k)
                ans+=(t-k);
        }
        cout<<ans<<endl;
    }
    return 0;
}