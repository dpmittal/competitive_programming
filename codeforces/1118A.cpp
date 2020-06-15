#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n, a, b;
        cin>>n>>a>>b;
        ll c= a*2;
        if(n==1)
            cout<<a<<endl;
        else if(c<=b)
            cout<<a*n<<endl;
        else{
            ll ans = (ll)(n/2)*b;
            if(n%2)
                ans+= a;
            cout<<ans<<endl;
        }
    }
    return 0;
}