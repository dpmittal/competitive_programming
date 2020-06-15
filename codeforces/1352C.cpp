#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int itr;
    cin>>itr;
    while(itr--){
        ll n, k;
        cin>>n>>k;
        ll ans = ((k-1)/(n-1))+ k;
        cout<<ans<<endl;
    }
    return 0;
}