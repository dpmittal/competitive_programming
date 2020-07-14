#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(int n, ll *dp){
    if(n == 1 || n == 0){
        return dp[n] = (1 % 107);
    }

    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = (n*fact(n-1, dp)) % 107;
}

int main(){

    ll dp[1001];
    memset(dp, -1, sizeof(dp));

    int n;
    cin>>n;

    ll sum = 0;
    int *a = new int[n];
    for(int i =0; i < n; i++){
        cin>>a[i];
        sum += fact(a[i], dp);
    }

    cout<<sum<<'\n';
    return 0;
}