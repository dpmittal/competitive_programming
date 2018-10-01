#include<bits/stdc++.h>
using namespace std;

int lcs(string a, string b, int i, int j, int dp[][1001]){
    if(i==0 || j==0){
        return dp[i][j] = 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    if(a[i - 1] == b[j - 1]){
        return dp[i][j] = 1 + lcs(a,b,i-1,j-1, dp);
    }

    else{
        return dp[i][j] = max(lcs(a,b,i-1,j,dp), lcs(a,b,i,j-1,dp));
    }
}

int main(){

    string a;
    string b;

    int dp[1001][1001];
    memset(dp, -1, sizeof(dp));
    cin>>a>>b;

    int n = lcs(a,b,a.length(),b.length(),dp);
    char *out = new char[n+1];
    int k = n;
    out[n] = '\0';

    int i = a.length();
    int j = b.length();

    while(i>=0 && j>=0){
        if(a[i-1] == b[j-1]){
            out[k-1] = a[i-1];
            i--;
            j--;
            k--;
        }

        else if(dp[i - 1][j] > dp[i][j-1]){
            i--;
        }

        else{
            j--;
        }
    }

    cout<<out<<'\n';
    return 0;
}