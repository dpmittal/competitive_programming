#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[2005][2005][6];

ll kOrderLCS(ll *a, ll *b, int i, int j, int n, int m, int k){
    if(i==n || j==m){
        return 0;
    }

    if(dp[i][j][k] != -1){
        return dp[i][j][k];
    }

    ll res=0;

    if(a[i] == b[j]){
        res = 1 + kOrderLCS(a,b,i+1,j+1,n,m,k);
    }

    else{
        if(k>0){
            res = 1 + kOrderLCS(a,b,i+1,j+1,n,m,k-1);
        }

        res = max(res, kOrderLCS(a,b,i,j+1,n,m,k));
        res = max(res, kOrderLCS(a,b,i+1,j,n,m,k));
    }

    return dp[i][j][k] = res;
}

int main(){

    ll a[2005];
    ll b[2005];
    int n,m,k;
    
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    memset(dp, -1, sizeof(dp));

    cout<<kOrderLCS(a, b, 0, 0, n, m, k)<<'\n';
    return 0;
}