#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll arr[10000001] = {0};
void check(){
    for(ll n=1; n<=1000000;n++){
        if(ceil(log2(n)) == floor(log2(n))){
            cout<<-1<<endl;
            continue;
        }
        ll ans = 0;
        if(n%2==0)
            ans = (n/2)-1;
        else
            ans = ((n+1)/2)-1;
        int j=2;
        for(ll i=2;i<=n;i+=2){
            ans+= ( i & ~(i-1) );
        }
        arr[n] = ans;
    }
}
int main(){
    check();
    int itr;
    cin>>itr;
    while(itr--){
        ll n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}