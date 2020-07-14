#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int countNum(int n){
    ll *dp = new ll[n + 1];
    dp[0] = 1;
    dp[1] = 2;
    for(int i = 2; i<= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main(){

    short int t;
    cin>>t;
    
    for(int i = 1; i<=t; i++){
        int n;
        cin>>n;
    
        cout<<"#"<<i<<" : "<<countNum(n)<<'\n';
    }
    return 0;
}