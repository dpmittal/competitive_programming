#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n , k;
        cin>>n>>k;
        if(n<=k)
            cout<<1<<endl;
        else{
            if(k==1)
                cout<<n<<endl;
            else{
                ll ans = n;
                for(ll i=2;i<=sqrt(n)+1;i++){
                    if(n%i==0){
                        if((n/i)<=k && i<ans)
                            ans = i;
                        else if(i<=k && (n/i)<ans)
                            ans = n/i;
                    }
                }
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}