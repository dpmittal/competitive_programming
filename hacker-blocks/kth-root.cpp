#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll powerIter(ll a,ll b){
	ll res = 1;

	while(b){
		if(b&1){
			res = res*a;
		}
		b = b>>1;
		a = (a*a);
	}
    return res;
}

int main(){

    short int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll s = 0;
        ll e = n;
        ll ans = -1;
        while(s<=e){
            ll m = (s+e)/2;
            if(pow(m, k) == n){
                ans = m;
                break;
            }

            else if(pow(m, k) < n){
                ans = m;
                s = m + 1;
            }

            else{
                e = m - 1;
            }
        }

        cout<<ans<<'\n';
    }
    return 0;
}