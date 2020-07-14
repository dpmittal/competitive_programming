#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int longestPalindrome(char *a, int i, int j){
    if(i>j){
        return dp[i][j] = 0;
    }   

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    if(a[i] == a[j]){
        return dp[i][j] = 2 + longestPalindrome(a, i + 1, j - 1);
    }

    else{
        return dp[i][j] = max(longestPalindrome(a, i + 1, j), longestPalindrome(a, i , j - 1));
    }
}

int main(){
    char a[10000];
    memset(dp, -1, sizeof(dp));
    cin.getline(a, 10000);
    cout<<longestPalindrome(a, 0, strlen(a) - 1)<<"\n";
    return 0;
}