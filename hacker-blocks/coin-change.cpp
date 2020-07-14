#include<bits/stdc++.h>
using namespace std;
long long minCoins(int coins[], int m, int n){
    if(n == 0){
        return 0;
    }
    long long res = INT_MAX;
    for(int i=0;i<m;i++){
        if(coins[i] <= n){
            long long currMin=1+minCoins(coins, m, n-coins[i]);
            res=min(res, currMin);
        }
    }
    return res;
}

int main(){

    int n,m;
    cin>>n>>m;
    int *coins = new int[n];
    for(int i=0;i<m;i++){
        cin>>coins[i];
    }
    cout<<minCoins(coins, m, n)<<"\n";
    return 0;
}