#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

inline ll nC2(int n){
    return ((n*n - n) / 2);
}

int main(){

    short int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *a = new int[n];
        ll sum = 0;
        map<int, ll> m;
        m.clear();

        m[0] = 1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
            sum %= n;
            sum = (sum+n)%n;
            m[sum]++;
        }

        //Algo

        ll ans=0;
        for(auto it=m.begin();it!=m.end();it++){
            ll no = it->second;
            ans += no*(no-1)/2;
        }

        cout<<ans<<'\n';
    }
    return 0;
}