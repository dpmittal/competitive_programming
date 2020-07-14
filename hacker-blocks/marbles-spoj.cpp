#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

inline ll marbles(int n, int k){
    if(n==k)
        return 1;
    if(k==0)
        return 0;
    if(k==1)
        return (ll)n;
    
    ll res = 1;
    if(k > n - k){
        k = n - k;
    }

    for(int i = 0; i < k; i++){
        res = res * (n - i) / (i + 1);
    }
    return res;
}

int main(){

    short t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<marbles(n-1,k-1)<<'\n';
    }
    return 0;
}